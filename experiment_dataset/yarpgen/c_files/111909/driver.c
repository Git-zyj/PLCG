#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
signed char var_1 = (signed char)-58;
signed char var_2 = (signed char)-103;
signed char var_3 = (signed char)98;
signed char var_4 = (signed char)94;
signed char var_5 = (signed char)-49;
signed char var_6 = (signed char)31;
signed char var_7 = (signed char)-76;
signed char var_8 = (signed char)-51;
signed char var_9 = (signed char)-97;
signed char var_10 = (signed char)32;
signed char var_12 = (signed char)-101;
signed char var_13 = (signed char)82;
int zero = 0;
signed char var_14 = (signed char)94;
signed char var_15 = (signed char)109;
signed char var_16 = (signed char)-29;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
