/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135627
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
    var_17 &= ((/* implicit */_Bool) ((((var_7) != (var_16))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) 63050394783186944ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (110973659U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_14)))))))) : (3671873848571479096LL)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -5617316897000102243LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [9ULL] [i_0] [i_1]))))) : (((/* implicit */int) (unsigned char)0)))))));
            var_19 = var_3;
        }
        var_20 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)7609)) >= (((/* implicit */int) (unsigned char)0)))) ? (((((/* implicit */int) (unsigned char)245)) ^ (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (unsigned short)65512))));
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            for (unsigned char i_3 = 4; i_3 < 22; i_3 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */long long int) min((3370319957U), (((/* implicit */unsigned int) (unsigned short)7609)))))));
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (-(7683827984858348457LL)))) ? (1392011712693188385LL) : (((((/* implicit */_Bool) 12691911523265595046ULL)) ? (((/* implicit */long long int) 0U)) : (9223372036854775807LL))))));
                        arr_15 [i_3] [i_3] [i_2 - 1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) (_Bool)1);
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            arr_18 [i_3] [i_2 + 1] [i_3] [i_2 + 1] [1LL] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_3 - 2]))))), (var_0))))) <= (((unsigned int) -7918253295001991514LL))));
                        }
                        arr_19 [i_3] [i_0] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_7)), (((((((/* implicit */_Bool) 4386790556250271335LL)) ? (((/* implicit */unsigned long long int) arr_17 [i_3] [i_3 - 1] [i_3])) : (arr_2 [(unsigned short)13] [i_2]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129)))))));
                        arr_20 [i_4] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) var_2);
                    }
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_24 = max((((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((((/* implicit */_Bool) var_3)) ? (1218340184038660833LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_3] [i_3] [i_3 - 3] [i_6]))))) : (arr_0 [i_2 - 1]))), (((/* implicit */long long int) (-(((/* implicit */int) (short)-15743))))));
                        var_25 = max((((((((/* implicit */_Bool) (unsigned char)195)) && (((/* implicit */_Bool) arr_10 [i_0] [i_2] [14U] [(short)6])))) ? (((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2498863151648499679LL))) : (((/* implicit */long long int) (+(var_1)))))), (min((175351964816549182LL), (((/* implicit */long long int) min((var_3), (var_9)))))));
                    }
                    for (unsigned char i_7 = 4; i_7 < 22; i_7 += 1) 
                    {
                        arr_27 [(unsigned short)11] [(unsigned short)11] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((max((14510106776715527101ULL), (((/* implicit */unsigned long long int) (+(22513089120517670LL)))))) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)33466)))))));
                        arr_28 [17ULL] [i_3] [i_3] [17ULL] = ((/* implicit */unsigned int) arr_8 [i_3] [i_3 - 1] [i_7 + 1] [20LL]);
                        arr_29 [15LL] [i_3] [i_3] [3LL] = ((/* implicit */short) var_7);
                        var_26 = ((/* implicit */unsigned int) ((((long long int) -1792778672303394197LL)) / (((((var_4) ? (var_6) : (((/* implicit */long long int) arr_10 [i_7] [i_3 - 4] [i_2] [i_0])))) >> (0ULL)))));
                        arr_30 [i_0] [i_3] = ((unsigned short) max((arr_22 [i_3] [i_3] [i_3] [i_3]), (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (2147475456LL)))));
                    }
                    var_27 = ((/* implicit */unsigned long long int) max((((((var_16) >= (((/* implicit */long long int) ((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) -6500797269549998554LL)) ? (arr_12 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (min((((long long int) (unsigned char)60)), ((+(-2949246191566460511LL)))))));
                    arr_31 [i_0] [i_3] = max((var_16), (max((((/* implicit */long long int) (unsigned char)49)), ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)82))))))));
                    var_28 = ((/* implicit */unsigned long long int) ((arr_23 [i_2 + 2] [i_3] [i_3 - 2] [i_3] [i_3] [i_3 + 1]) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_2 + 3] [i_3] [i_3] [i_3] [i_3 - 3] [i_3 + 1]))))))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned long long int) (unsigned char)82);
    }
}
