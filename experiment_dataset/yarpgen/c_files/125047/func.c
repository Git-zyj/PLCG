/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125047
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */short) ((unsigned char) ((signed char) ((((/* implicit */_Bool) 0ULL)) ? (2712832892U) : (((/* implicit */unsigned int) var_6))))));
    var_20 = var_12;
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((13ULL) >> (11ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((15147245066080145368ULL) == (((/* implicit */unsigned long long int) var_9))))) > (((((/* implicit */_Bool) (signed char)-42)) ? (var_15) : (((/* implicit */int) var_18)))))))) : (((((/* implicit */_Bool) var_2)) ? (-4111411719383180545LL) : (-656461194917610808LL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */int) (signed char)24);
                var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 11ULL)) ? (18446744073709551590ULL) : (0ULL)))) ? ((~(((/* implicit */int) (unsigned char)32)))) : (((/* implicit */int) ((18446744073709551605ULL) != (18446744073709551605ULL))))))));
                var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((long long int) max((var_8), (((/* implicit */unsigned int) (signed char)-112)))))) : (max((var_12), (((/* implicit */unsigned long long int) -2481299471652058120LL))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)57))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 185904026)), (arr_1 [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) var_8)) : (arr_10 [i_0] [i_1] [i_2])))))))) : (((((/* implicit */_Bool) (-(-1531395102)))) ? (max((1248199553U), (((/* implicit */unsigned int) (signed char)-42)))) : (0U)))));
                    var_25 = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) * (18446744073709551591ULL))) != (min((18446744073709551605ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) 285806462991745602LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24530))) : (-9139171473040871092LL))) : (((long long int) min((8156141128700953999ULL), (((/* implicit */unsigned long long int) var_4)))))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (-(max((arr_1 [i_0]), (((/* implicit */unsigned int) (~(arr_9 [i_0] [i_0] [i_2])))))))))));
                }
            }
        } 
    } 
}
