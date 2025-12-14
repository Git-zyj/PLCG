#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-37;
unsigned char var_1 = (unsigned char)181;
unsigned char var_2 = (unsigned char)121;
unsigned char var_4 = (unsigned char)176;
int var_5 = 348919845;
unsigned int var_7 = 1223416859U;
unsigned char var_8 = (unsigned char)28;
short var_9 = (short)-19890;
int zero = 0;
long long int var_10 = -4645397508514033301LL;
unsigned long long int var_11 = 7861736767954854868ULL;
long long int var_12 = 3787649428121564689LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
