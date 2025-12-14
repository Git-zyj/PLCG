/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180792
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
    var_15 |= ((/* implicit */signed char) var_8);
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) var_1);
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) min(((unsigned char)242), (((/* implicit */unsigned char) (signed char)-1))))))) : ((-((-(((/* implicit */int) (unsigned short)51170))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (((+((+(((/* implicit */int) arr_0 [i_2 - 1])))))) >> ((((-(((((/* implicit */_Bool) 2771106194U)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (signed char)3)))))) + (38)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            arr_18 [i_0 - 2] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min(((unsigned char)181), (var_3)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_12 [i_0] [i_4] [i_2] [i_3] [i_2 + 1] [i_3]) : (((/* implicit */long long int) arr_14 [i_0] [i_1] [i_1]))))))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)28676)) || (((/* implicit */_Bool) arr_1 [i_2])))))))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) -7611855928369517378LL))));
                            var_18 -= ((/* implicit */int) ((unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) >= (arr_12 [i_4] [i_3] [i_2 - 1] [20] [i_1] [i_0]))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_15 [i_0] [i_0 - 2] [i_1] [i_1] [i_0] [i_3] [i_3])))));
                        }
                        for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((short) 8868555917251972019LL)))));
                            var_20 = ((/* implicit */unsigned long long int) ((2017275445) != (((/* implicit */int) (short)27258))));
                        }
                        arr_22 [i_3] [i_0] [i_2 - 2] [i_1] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) (~(((int) var_12))))), (min((min((arr_17 [i_0] [i_0] [i_2 - 1] [i_2] [i_3] [i_3]), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) min(((unsigned short)65525), ((unsigned short)14374))))))));
                    }
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 10U)))) > (max((var_2), (((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 4] [i_2 - 2]))))));
                    arr_23 [i_0] [i_2] [i_2 - 2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)52)) || (((/* implicit */_Bool) (unsigned short)65535))))), ((~(-5738382731133991531LL)))));
                    var_22 = ((/* implicit */unsigned char) (-(max((((2274843112062382503LL) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2]))))), (((/* implicit */long long int) -2017275468))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) ((unsigned int) max((((((/* implicit */_Bool) (unsigned short)10)) ? (1782196443U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14374))))), (((/* implicit */unsigned int) var_1)))));
    /* LoopSeq 1 */
    for (int i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) (((~(arr_17 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) / (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (unsigned short)28804))) << (((max((arr_21 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_21 [i_6] [(signed char)6] [i_6] [i_6] [(signed char)6] [i_6] [i_6]))) - (3100458120913319711LL))))))));
        var_25 = ((/* implicit */int) 4294967280U);
    }
}
