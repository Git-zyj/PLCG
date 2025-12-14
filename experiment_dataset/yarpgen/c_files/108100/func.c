/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108100
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
    var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-126)) & (((/* implicit */int) var_9))))))) ? (var_3) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) /* same iter space */
                    {
                        var_14 = arr_7 [i_2] [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 1];
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [10]))))))))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)12))))) ? (((/* implicit */int) ((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126)))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-50)) >= (((/* implicit */int) (_Bool)1))))))), (arr_2 [i_0] [(_Bool)1])));
                        arr_11 [i_0] [i_1] [(unsigned char)13] = ((/* implicit */long long int) var_1);
                    }
                    for (unsigned short i_5 = 1; i_5 < 10; i_5 += 4) /* same iter space */
                    {
                        arr_14 [i_5] [i_5] [i_5] [i_0] = min(((signed char)126), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)14))))));
                        var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_6)) ? (arr_2 [i_2 - 1] [i_5 + 1]) : (((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((((/* implicit */_Bool) 1320850307255710611LL)) ? (arr_2 [i_2] [i_0]) : (arr_0 [i_0]))) == (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2 - 1] [i_5 + 1] [i_0] [i_0])) ? (238786594) : (((/* implicit */int) (unsigned short)65521)))))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 12; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 11; i_7 += 4) 
                        {
                            {
                                arr_20 [i_0] [(unsigned short)8] [(_Bool)1] [i_1] [i_2 - 1] [i_6 - 2] [i_7] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (6067859845885304910LL)))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_18 [i_0] [i_1] [(signed char)2]))))), (((unsigned short) arr_4 [i_0]))))) > (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) max((arr_17 [i_0] [i_0]), (((/* implicit */short) arr_5 [i_0] [i_0] [i_0])))))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_6] [i_7 + 3])))))), (((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_1] [i_1] [i_6 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) (-(((long long int) var_9))));
    var_20 = ((/* implicit */short) var_7);
    var_21 = ((/* implicit */signed char) (((+(-1))) == (((var_4) / (var_5)))));
}
