#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_17 = 1714183636;
int var_18 = 335308621;
int var_19 = 704505403;
int var_20 = -764829557;
int var_21 = 1800227785;
int var_22 = 69854660;
int var_23 = 1732293403;
int var_24 = -1946070629;
int var_25 = 142670285;
int var_26 = -1346067933;
int var_27 = 774194711;
int var_28 = -1691449909;
int var_29 = 1223297332;
int var_30 = -1428838411;
int var_31 = -1983237057;
int var_32 = -52061790;
int var_33 = -1294398374;
int var_34 = 507717434;
int var_35 = -1584764469;
int var_36 = -1994117266;
int var_37 = 1287372404;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
