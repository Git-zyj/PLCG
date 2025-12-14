#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12740057772161721253ULL;
unsigned long long int var_2 = 14171285118789776841ULL;
unsigned long long int var_3 = 82156468439131990ULL;
unsigned long long int var_4 = 12664669065715495283ULL;
unsigned long long int var_5 = 11065848780420120281ULL;
unsigned long long int var_6 = 7038162407801349416ULL;
unsigned long long int var_8 = 9545712303099774848ULL;
unsigned long long int var_9 = 10908782570174893770ULL;
unsigned long long int var_10 = 4053027330356242742ULL;
unsigned long long int var_11 = 684214446488616358ULL;
unsigned long long int var_12 = 2011818739764668259ULL;
unsigned long long int var_13 = 8442215451121358432ULL;
unsigned long long int var_14 = 2638878112886113068ULL;
unsigned long long int var_15 = 17976128738873381500ULL;
unsigned long long int var_16 = 1746585255085134951ULL;
unsigned long long int var_17 = 12310210624954802406ULL;
unsigned long long int var_18 = 7624887374899010811ULL;
int zero = 0;
unsigned long long int var_19 = 9705767350577894567ULL;
unsigned long long int var_20 = 2183745071308496668ULL;
unsigned long long int var_21 = 14349712807022200415ULL;
unsigned long long int var_22 = 9657149105054001712ULL;
unsigned long long int var_23 = 7197028316908027945ULL;
unsigned long long int var_24 = 199381522924707437ULL;
unsigned long long int var_25 = 2588423644875643303ULL;
unsigned long long int var_26 = 1564989018513135590ULL;
unsigned long long int var_27 = 3364413108559101273ULL;
unsigned long long int var_28 = 900946975346933039ULL;
unsigned long long int var_29 = 18120418013387930132ULL;
unsigned long long int var_30 = 6846884647313296706ULL;
unsigned long long int var_31 = 7966740090833181789ULL;
unsigned long long int var_32 = 15155017080274614327ULL;
unsigned long long int var_33 = 124684990511624876ULL;
unsigned long long int var_34 = 5042220235291193945ULL;
unsigned long long int var_35 = 12403077299796895558ULL;
unsigned long long int var_36 = 131330263697203547ULL;
unsigned long long int var_37 = 14029457040379517601ULL;
unsigned long long int var_38 = 8614304286719852186ULL;
unsigned long long int var_39 = 7480514998575898259ULL;
unsigned long long int var_40 = 13051908654211896233ULL;
unsigned long long int var_41 = 15603769367421156088ULL;
unsigned long long int arr_16 [13] [13] [13] ;
unsigned long long int arr_21 [13] ;
unsigned long long int arr_31 [13] [13] [13] [13] [13] ;
unsigned long long int arr_39 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 10412672270519207932ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = 6023564026181455440ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = 12654625390491644176ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_39 [i_0] = 4252691813384957140ULL;
}

void checksum() {
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
