/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17756
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0 - 1] [i_0 + 1] [i_1] = ((/* implicit */signed char) (+(((arr_0 [i_0 + 1] [i_0 + 3]) % (arr_0 [i_0 + 3] [i_0 + 2])))));
                var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)179))));
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)235)) < (-1)))) % (((((/* implicit */int) ((unsigned char) arr_3 [i_2 - 3] [i_2 - 3] [i_2]))) >> (((((unsigned long long int) 1852475201)) - (1852475201ULL)))))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((((/* implicit */_Bool) (+(-4701619860719228587LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0])) / (var_11)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) / (var_6))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (-1852475171) : (-1852475202)))), (((unsigned int) var_6)))))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2 - 2] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0] [i_2]) : (((/* implicit */long long int) 1852475201))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 7782411749778174543LL)))))) : ((-(var_1))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        var_17 *= ((/* implicit */unsigned char) min(((+((-(-1852475202))))), (((int) (unsigned char)0))));
                        var_18 = ((/* implicit */signed char) var_10);
                        arr_12 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) min((((int) arr_6 [i_2 - 1] [i_2 - 1] [i_3 + 2])), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1])))))));
                    }
                    for (unsigned int i_4 = 4; i_4 < 17; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) var_8))))))));
                            var_19 -= ((((/* implicit */_Bool) (unsigned char)126)) ? (137405399040ULL) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (((8301647636366886171ULL) ^ (((/* implicit */unsigned long long int) 1852475181)))))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((((unsigned long long int) var_12)), ((+(8301647636366886171ULL)))))));
                            arr_20 [i_0] [1LL] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255)))))));
                            var_21 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_4 - 1]))) % (max(((~(8301647636366886165ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))));
                        }
                        arr_21 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] = (-((~((~(((/* implicit */int) (unsigned short)50955)))))));
                        var_22 = ((unsigned long long int) min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) arr_2 [i_4 - 2]))));
                        arr_22 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8301647636366886171ULL)) || (((/* implicit */_Bool) -1852475202))));
                    }
                }
                var_23 = ((/* implicit */unsigned char) var_12);
            }
        } 
    } 
    var_24 = ((/* implicit */int) (+(var_6)));
    var_25 -= ((/* implicit */unsigned char) ((var_3) << ((((-((-(1852475180))))) - (1852475124)))));
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) 1852475181))))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) -1852475198)))))));
}
