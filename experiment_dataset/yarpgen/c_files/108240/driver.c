#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8701382627386202343LL;
unsigned long long int var_2 = 16768390399570170394ULL;
unsigned long long int var_5 = 9644571787382496246ULL;
long long int var_8 = -1005591175768953432LL;
unsigned long long int var_9 = 11399141859769867073ULL;
unsigned long long int var_10 = 12595723243385488320ULL;
unsigned long long int var_11 = 6912813219443571074ULL;
unsigned long long int var_12 = 2672873952794563231ULL;
long long int var_13 = -2482454895004044036LL;
long long int var_17 = 535496130490375439LL;
int zero = 0;
unsigned long long int var_20 = 1494777530042085029ULL;
unsigned long long int var_21 = 2514759996131017118ULL;
long long int var_22 = 4572543703720877279LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
