/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101203
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
    var_13 = ((/* implicit */unsigned long long int) (unsigned char)254);
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)123))))) ? (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))), ((-(((/* implicit */int) (short)32748)))))) : ((-(((((/* implicit */int) var_1)) >> (((((/* implicit */int) (short)-11954)) + (11969)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (max((12933233371219153595ULL), (arr_2 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)2), (((/* implicit */unsigned char) (_Bool)1))))))))));
                var_15 = ((/* implicit */short) (+((-(((/* implicit */int) arr_3 [i_0] [i_1 - 1]))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) (short)10852));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((((((/* implicit */int) arr_3 [i_1] [i_3])) + (2147483647))) >> (((13843387873922648667ULL) - (13843387873922648657ULL)))))))) - (((((/* implicit */_Bool) ((unsigned char) -1771881174234873746LL))) ? (min((((/* implicit */long long int) arr_3 [i_1] [(unsigned char)11])), (-1284810949765287109LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_11))))))));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_7))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) arr_3 [i_0] [(short)2]);
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((var_4), (((/* implicit */short) var_7))));
    var_19 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) var_12)) == (((/* implicit */int) (unsigned char)13)))) ? (((((/* implicit */_Bool) 11650329429732093650ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (-1284810949765287109LL))) : (((/* implicit */long long int) ((/* implicit */int) max((var_10), (var_9)))))))));
}
