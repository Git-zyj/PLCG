/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188293
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || ((_Bool)1)))), ((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)50)) || (((/* implicit */_Bool) var_1))))))))))));
    var_11 = ((/* implicit */long long int) var_7);
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_1))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)-31), ((signed char)35)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2])) ? (((/* implicit */long long int) var_5)) : (arr_5 [i_0] [i_1 + 1]))) : (((/* implicit */long long int) var_4))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1])) ^ (((/* implicit */int) var_1)))) / (((/* implicit */int) ((((/* implicit */_Bool) 1764957745)) && (((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3])))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned int) arr_2 [i_0]);
                /* LoopSeq 4 */
                for (int i_4 = 2; i_4 < 23; i_4 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_9 [i_0] [(unsigned char)17] [i_4] [i_0] [i_4] [i_4]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_10 [i_1 - 1])))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) 503193763U))))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)115)) == (((/* implicit */int) arr_9 [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4] [i_4])))))));
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) | (((/* implicit */int) var_1))))) ? ((+(((/* implicit */int) var_8)))) : (((var_5) + (((/* implicit */int) (signed char)-48))))))) && (((/* implicit */_Bool) (((+(((/* implicit */int) var_1)))) >> ((((~(((/* implicit */int) var_7)))) + (152)))))))))));
                        arr_19 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)44)) & (((((/* implicit */_Bool) arr_8 [(signed char)12] [(signed char)12] [(unsigned short)4])) ? (var_5) : (((/* implicit */int) (unsigned short)65526))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 980430106)) || (((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (-801866013)))));
                    }
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((min(((-(var_5))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) / (((((/* implicit */_Bool) arr_11 [i_0] [i_4 + 1] [i_4 - 1] [i_0])) ? (var_5) : (((/* implicit */int) (signed char)6))))));
                }
                for (int i_6 = 2; i_6 < 23; i_6 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((((/* implicit */long long int) ((arr_9 [i_0] [i_1] [i_6] [i_0] [i_0] [i_1 + 2]) ? (((/* implicit */int) (short)-3008)) : (((/* implicit */int) arr_18 [i_1 + 1] [i_6 + 2] [i_6] [i_6 - 1]))))), (2497997225994281369LL))))));
                    var_19 = ((/* implicit */unsigned short) (short)7196);
                    var_20 &= ((/* implicit */_Bool) ((((max((((/* implicit */unsigned int) (short)7199)), (var_3))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53987))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((signed char) (unsigned short)4952))) : (((((/* implicit */int) (short)-7081)) | (((/* implicit */int) (signed char)64)))))))));
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 23; i_7 += 2) /* same iter space */
                {
                    var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0] [(short)15])) ^ (((/* implicit */int) arr_4 [i_1 - 1] [i_0]))))) ? (((/* implicit */int) ((unsigned char) (short)3032))) : (((/* implicit */int) var_1))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((11671673691601846131ULL) >> (((arr_21 [i_1 + 2] [i_1 + 2] [i_1 + 1]) + (666347276))))))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(arr_12 [i_7 + 2] [i_7] [i_1 - 1] [i_1 - 1]))))));
                    }
                    arr_28 [i_7 - 2] [15] [i_1] [11ULL] = ((/* implicit */signed char) (_Bool)1);
                    arr_29 [i_0] [i_0] [(unsigned short)16] [i_0] = arr_27 [i_1];
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        arr_33 [i_7] [i_9] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-7181))));
                        var_24 = ((/* implicit */long long int) ((signed char) (~(arr_8 [(_Bool)1] [18ULL] [i_0]))));
                    }
                }
                for (int i_10 = 2; i_10 < 23; i_10 += 2) /* same iter space */
                {
                    var_25 -= (short)-7197;
                    arr_38 [i_0] [i_1] [i_1 + 1] [17U] = ((/* implicit */unsigned short) 4194303LL);
                }
            }
        } 
    } 
}
