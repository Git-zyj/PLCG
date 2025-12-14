/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154957
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
    var_10 = ((/* implicit */unsigned short) var_1);
    var_11 = ((/* implicit */unsigned int) max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */long long int) ((/* implicit */int) (short)6210))) : (((((/* implicit */_Bool) -1233932181)) ? (2531180400381870139LL) : (2531180400381870131LL))))))));
    var_12 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        arr_11 [i_3] [(short)1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned long long int) (~(2531180400381870148LL)))) : ((+(arr_1 [i_2]))))) << (((max((arr_10 [i_3 - 1] [i_3] [i_3] [i_1 - 1]), (arr_10 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_1 - 1]))) - (1242807270)))));
                        var_13 -= ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_5 [i_1] [i_1])))), ((~(((((/* implicit */_Bool) -2531180400381870140LL)) ? (((/* implicit */int) (short)-32756)) : (1905232201)))))));
                        arr_12 [i_1] = ((/* implicit */unsigned long long int) 2097151U);
                        arr_13 [i_3] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_1 - 1] [i_0] [i_0])) ? (arr_10 [i_3 - 1] [i_1 - 1] [20LL] [20LL]) : (((/* implicit */int) var_1)))), ((~(var_5)))));
                    }
                    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_2] [18] [i_2] [i_1 - 1]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2097151U)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) var_9))))) : ((~(arr_6 [i_1 - 1] [i_1 - 1] [13LL])))));
                        var_15 += ((/* implicit */int) (((!(((/* implicit */_Bool) 1390318701)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [12] [0U]))) : (var_4)))) ? (max((var_4), (((/* implicit */unsigned long long int) (unsigned short)46021)))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), (arr_10 [i_0] [i_1 - 1] [i_2] [i_4])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 2) 
                    {
                        var_16 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])) < (((((/* implicit */_Bool) -2531180400381870154LL)) ? (max((((/* implicit */int) var_7)), (var_0))) : (((((/* implicit */_Bool) 62177798)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))));
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))))))))));
                        var_18 = ((/* implicit */signed char) var_7);
                        var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) -2531180400381870140LL)) ? (-2531180400381870141LL) : (((/* implicit */long long int) 2097135U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65518)) ? (max((1780418025U), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))))))));
                    }
                    var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_2] [i_2])) : (var_5)))));
                    var_21 += ((/* implicit */int) var_9);
                }
            } 
        } 
    } 
}
