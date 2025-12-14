/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185473
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
    var_18 = ((/* implicit */unsigned long long int) -1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) / ((-(((/* implicit */int) (short)(-32767 - 1)))))))) - ((+(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [2])) ? (var_16) : (((/* implicit */unsigned long long int) var_13))))))));
                            var_20 = ((/* implicit */short) max((((((/* implicit */int) arr_8 [i_0] [i_2 + 2] [i_2 + 2] [i_3] [i_3])) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (arr_0 [i_0]))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_1] [i_0])) : (2493501896536859566ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12963499537144738618ULL)) ? (var_13) : (((/* implicit */int) (short)21628))))))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)8793)) != (((/* implicit */int) (_Bool)1))))) - (max((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_3])), (var_10)))));
                            arr_9 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) ((((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 1651421148)) : (4934409020096555054ULL)))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -1130809069)) && (((/* implicit */_Bool) 131071)))))) : (((int) var_0))));
                            var_22 = min(((signed char)(-127 - 1)), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) -479014791))) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                    } 
                } 
                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_0] [i_0] [i_0])) ? (max((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))) : (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */int) (short)16384)))))))) ? (((/* implicit */unsigned long long int) 1)) : (arr_6 [i_0] [i_1] [i_0]));
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (536862720) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (+(-938017487)))) : (((unsigned long long int) (short)(-32767 - 1))))))));
                var_24 = (short)6291;
                var_25 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((int) (short)-6292)) < (((/* implicit */int) (signed char)-31))))), (min((((/* implicit */unsigned long long int) ((short) var_3))), (((((/* implicit */_Bool) 848955163440466982ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (var_16)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */int) 11971815458389781223ULL);
    var_27 = ((/* implicit */int) var_15);
}
