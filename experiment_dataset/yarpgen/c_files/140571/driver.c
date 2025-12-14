#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34369;
unsigned char var_2 = (unsigned char)164;
long long int var_3 = -2464889509026145587LL;
unsigned short var_4 = (unsigned short)24794;
unsigned int var_5 = 3992701950U;
long long int var_7 = 1026389488623213375LL;
signed char var_8 = (signed char)68;
_Bool var_12 = (_Bool)1;
unsigned char var_15 = (unsigned char)198;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 960704265187887959ULL;
unsigned short var_19 = (unsigned short)43143;
unsigned int var_20 = 2206793066U;
int var_21 = 835901539;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
