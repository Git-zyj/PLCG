/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130785
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
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (var_8)))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) % (var_14))))) : (((((/* implicit */int) (unsigned char)236)) << (((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_10))) - (16U))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)19274)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [(signed char)11])) : (((/* implicit */int) (unsigned char)235))))))) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) ((_Bool) arr_5 [10ULL] [i_0])))));
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (7157656165542347208LL) : (arr_0 [i_0 + 3])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (-20185193))) : (((((/* implicit */_Bool) arr_1 [i_0 - 2] [(unsigned char)8])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 3])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) var_2);
                            var_20 = ((/* implicit */unsigned short) ((((_Bool) max((((/* implicit */unsigned short) arr_6 [6ULL] [i_2] [i_3])), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2])))))) : (var_14)));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) arr_1 [i_0 - 2] [i_2])), (3096155829U)))))) ? (arr_7 [i_0 - 2] [(short)7] [i_2] [i_3]) : ((~((+(arr_7 [i_0] [i_1] [i_2] [18ULL])))))));
                            var_22 = max((min((((/* implicit */int) (unsigned short)49520)), ((~(((/* implicit */int) (unsigned char)33)))))), (((/* implicit */int) max((max((arr_10 [(_Bool)1]), (arr_2 [i_1]))), (((/* implicit */unsigned short) arr_3 [i_3] [i_1]))))));
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))) * (arr_11 [i_3 - 2] [i_3] [i_3 + 1] [i_3] [i_3 - 1] [17U])))) ? (min((((/* implicit */unsigned long long int) -1293574764)), (arr_11 [i_1] [i_2] [i_2] [(short)17] [i_3 - 1] [i_3 + 1]))) : (((((/* implicit */_Bool) arr_11 [i_2] [i_3 - 2] [i_3] [i_3] [i_3 - 1] [i_3])) ? (arr_11 [i_2] [i_3] [14LL] [(signed char)18] [i_3 - 2] [i_3]) : (arr_11 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_3 + 1]))));
                        }
                    } 
                } 
                var_24 = var_6;
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) 12339989532296495990ULL);
    var_26 = ((/* implicit */unsigned long long int) var_3);
}
