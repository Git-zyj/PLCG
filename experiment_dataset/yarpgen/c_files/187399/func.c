/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187399
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
    var_14 -= ((/* implicit */long long int) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) ((signed char) (signed char)-88))) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0 + 1] [i_0 + 1]))) == (((/* implicit */int) max((arr_7 [i_0] [i_0 + 1] [i_2]), ((unsigned short)65523))))));
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned int) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-114)) + (((/* implicit */int) var_7))))), (var_11)))))));
                                var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0 + 1] [i_0] [i_0 + 1])), (arr_0 [i_0 + 1] [i_0 + 1])))), (((((/* implicit */_Bool) (unsigned short)37729)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)27807))))));
                                var_18 = ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) ((signed char) arr_9 [i_2] [i_2] [i_2] [i_2]))))));
                                var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)24861)) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (signed char)-14)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-114))))) && (((/* implicit */_Bool) (unsigned short)27806)))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-20801)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */long long int) var_4)) : (arr_10 [i_0 + 1] [i_1] [i_1])))))) : (((arr_4 [i_0] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)127))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) (+(((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7))))) % (((/* implicit */int) min(((short)255), (((/* implicit */short) (signed char)-14)))))))));
    var_22 = ((/* implicit */unsigned int) (signed char)-88);
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 13; i_5 += 4) 
    {
        for (unsigned int i_6 = 2; i_6 < 15; i_6 += 4) 
        {
            {
                arr_17 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (_Bool)1)))))) >= (((((/* implicit */_Bool) 576460752303423487LL)) ? (((/* implicit */unsigned long long int) var_8)) : (var_1)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)24858)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27804))) : (3203609612U)))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            arr_22 [i_5 + 2] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (+(var_13)));
                            var_23 = ((/* implicit */_Bool) ((((arr_21 [4ULL] [i_5 + 1] [i_5 + 2] [i_5 + 1]) / ((+(((/* implicit */int) (signed char)123)))))) * (((/* implicit */int) min((arr_16 [i_5] [i_5] [i_5 + 3]), (var_5))))));
                            arr_23 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-8)))))))), (((unsigned long long int) ((arr_20 [(short)4]) << (((((/* implicit */int) var_3)) - (7566))))))));
                            var_24 -= (signed char)-14;
                        }
                    } 
                } 
            }
        } 
    } 
}
