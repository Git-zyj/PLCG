/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184404
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
    var_19 = ((max((((((/* implicit */_Bool) var_15)) ? (1025673825318651808ULL) : (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) var_5)))) >= (((/* implicit */unsigned long long int) ((((var_13) << (((((/* implicit */int) (short)3)) - (2))))) >> (((/* implicit */int) ((_Bool) var_17)))))));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), ((((_Bool)1) ? (var_12) : (var_3))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((12748459739735045115ULL) % (15ULL))) : (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))))));
    var_21 = ((/* implicit */unsigned char) var_14);
    var_22 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_16))) ? (((var_3) & (var_3))) : (((/* implicit */unsigned long long int) (~(var_15))))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_13) << (((var_9) - (16826379767432299773ULL)))))) && (((/* implicit */_Bool) min((var_18), (((/* implicit */long long int) (unsigned char)239))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 + 1]);
                arr_7 [i_0] = ((((/* implicit */_Bool) ((int) arr_2 [i_1 - 2] [i_1 - 3]))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((_Bool) var_13)))))) : (((unsigned long long int) arr_5 [i_0] [i_1 - 1] [i_1 - 2])));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_12 [i_1 - 2] [i_1 - 2] [i_1 - 2])))) ? (((/* implicit */int) ((_Bool) 4294967295LL))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_2])) <= (var_12)))))));
                            arr_13 [i_0] [i_0] [i_1 - 3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_9 [i_0] [i_2 - 1] [i_1 - 3] [i_0]);
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) -5257931813310509595LL);
                var_25 = ((/* implicit */short) (-((~(((/* implicit */int) arr_4 [i_1 - 2]))))));
            }
        } 
    } 
}
