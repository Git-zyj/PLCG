/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179281
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
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)144)))) ? (((/* implicit */unsigned long long int) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49258)))))) : ((((_Bool)1) ? (15635919200329295158ULL) : (((/* implicit */unsigned long long int) var_12)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 1])))))) + (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((3038879179U) <= (1256088092U))))) : (((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 4; i_3 < 15; i_3 += 2) /* same iter space */
                    {
                        var_15 ^= ((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (((long long int) (signed char)-99)))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) 859893744U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) << (((1256088095U) - (1256088078U)))));
                        var_17 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 3038879190U)) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) (_Bool)1)))));
                        var_18 = ((/* implicit */unsigned char) min((min((arr_6 [i_1] [i_1] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) ((4294967295U) != (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))))));
                        var_19 &= ((/* implicit */int) (!(((_Bool) max((3038879156U), (((/* implicit */unsigned int) var_1)))))));
                    }
                    for (unsigned int i_4 = 4; i_4 < 15; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) (short)-11376)))) > (max((((((/* implicit */_Bool) 2554156051U)) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [9U] [i_1] [i_1] [i_4] [(signed char)12])) ? (((/* implicit */long long int) arr_11 [i_4] [i_4] [i_4 - 2] [i_4] [i_4])) : (arr_14 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0]))))))));
                            var_21 = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_5]);
                            var_22 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_4])) ? (((/* implicit */unsigned long long int) -1537521780)) : (2265722750941548630ULL)))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_14 [i_0] [i_1] [i_0] [i_4] [i_5] [i_5]) : (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) ((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)153))))) : (arr_4 [i_0])))));
                        }
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_23 -= ((/* implicit */unsigned short) (unsigned char)58);
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_8) > (((/* implicit */int) (signed char)1)))))) > (min((((/* implicit */unsigned int) (unsigned char)15)), (arr_2 [i_6])))))))))));
                            var_25 &= var_11;
                        }
                        var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)249)) + (((/* implicit */int) (unsigned char)6))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (arr_2 [i_1])));
                        var_27 ^= (~(min((min((((/* implicit */unsigned int) var_4)), (1361218345U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))));
                    }
                }
            } 
        } 
    } 
}
