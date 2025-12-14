/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169645
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
    var_11 *= ((/* implicit */unsigned char) var_1);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (~(((55074729) ^ (arr_1 [i_0])))));
        arr_3 [i_0] [18U] = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) (-(-55074730)))), (-7834437669851014917LL)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [(_Bool)1] [i_1] [i_1]), ((unsigned short)11608)))) ? (2292952762U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))) || (((/* implicit */_Bool) (unsigned short)25549)));
            var_13 = ((/* implicit */int) -7834437669851014937LL);
            var_14 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1]))));
        }
        var_15 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) (unsigned short)54457))), (arr_1 [10U])));
    }
    var_16 = (unsigned short)25139;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (int i_4 = 3; i_4 < 7; i_4 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_7 [i_2]) : (((/* implicit */int) arr_9 [4U]))))))) / (max((((((/* implicit */_Bool) -1962790888)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65513))) : (2002014534U))), ((~(388886748U)))))));
                    arr_15 [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (~(2002014518U)))), (((((/* implicit */_Bool) 2292952762U)) ? (((/* implicit */long long int) 2002014541U)) : (872316081376286007LL))))), (1041673016499122411LL)));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((_Bool) max((((/* implicit */long long int) arr_19 [i_2 + 1] [i_3] [i_5] [i_2])), (var_6))))), (max((((((/* implicit */_Bool) (short)24576)) ? (2002014500U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24591))))), (((/* implicit */unsigned int) (-(arr_7 [i_2]))))))));
                                arr_22 [i_2] [i_2] [i_4 - 3] [i_5] [i_6] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (unsigned short)5)), (arr_17 [i_2]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_10 [(unsigned short)2]), (((/* implicit */unsigned int) (unsigned char)95))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : (((arr_13 [i_5] [i_6]) / (((/* implicit */unsigned int) -443743317)))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) -2526009385668025846LL);
                }
            } 
        } 
    } 
}
