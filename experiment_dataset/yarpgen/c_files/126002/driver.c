#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8650250277863296014ULL;
signed char var_3 = (signed char)89;
unsigned long long int var_4 = 14884877157509483540ULL;
int var_5 = -2147048523;
unsigned long long int var_8 = 7971612122594192848ULL;
int zero = 0;
unsigned long long int var_10 = 3683271447759512838ULL;
unsigned long long int var_11 = 6089560738818507198ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
