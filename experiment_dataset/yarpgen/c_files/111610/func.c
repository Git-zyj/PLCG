/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111610
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((13164280338511972415ULL) | (((/* implicit */unsigned long long int) var_2))))) ? (var_10) : (var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (16241960345215829814ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_12)) != (((((6821695884237302594ULL) % (((/* implicit */unsigned long long int) 3932160U)))) >> (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_17)))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_22 = ((/* implicit */signed char) ((unsigned short) (unsigned short)384));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)36624))) ^ (3098897445100046024LL)));
                }
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    var_24 = ((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >> (((-3098897445100046024LL) + (3098897445100046045LL)))))), (arr_5 [i_0 + 1]))));
                    var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_3] [i_1] [i_3] [i_0])) + (2147483647))) >> (((140480131U) - (140480123U)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_0])) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30162))) | (9569380704936322223ULL))))))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [(signed char)10]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_3] [19U])) | (((/* implicit */int) var_13)))))))));
                }
                for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    var_26 = ((/* implicit */int) arr_7 [i_1]);
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073441116160ULL)) ? (((/* implicit */int) (short)27858)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (unsigned short)49576))));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 3409441456U)) || (((/* implicit */_Bool) (signed char)124))))) <= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) var_19))))));
                    var_29 = ((/* implicit */unsigned short) ((max((var_18), (((/* implicit */long long int) arr_5 [i_0 - 1])))) != (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0 - 3])))))));
                }
                for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    var_30 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned short) arr_2 [i_0] [i_1]))))), (((unsigned long long int) var_0)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1])))));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_11 [i_5] [i_1] [1] [i_0]) ? (5282463735197579226ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) >= (((/* implicit */unsigned long long int) -3098897445100046024LL)))))) <= (((((9569380704936322209ULL) << (((((/* implicit */int) (unsigned short)63856)) - (63814))))) >> (((/* implicit */int) (signed char)25))))));
                }
                var_32 &= ((/* implicit */unsigned long long int) (+(((var_9) - (max((3318801872U), (((/* implicit */unsigned int) (unsigned char)64))))))));
            }
        } 
    } 
    var_33 = ((/* implicit */_Bool) var_12);
}
