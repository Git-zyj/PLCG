/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109048
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))) * (2144583243U)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) * (arr_2 [i_0 - 1]))) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-37)) + (2147483647))) >> (((-1663477249) + (1663477274)))))));
        arr_4 [i_0] = ((/* implicit */long long int) 4294967295U);
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_19 += ((((/* implicit */_Bool) 1089394421)) ? (11037127989718283057ULL) : (((/* implicit */unsigned long long int) min((-1663477249), (((/* implicit */int) arr_7 [i_1]))))));
        var_20 *= ((/* implicit */_Bool) (signed char)111);
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            arr_18 [6ULL] [i_1] [16U] [(unsigned char)3] [i_4] [11U] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_2 + 1] [i_2 - 2] [i_4 - 1] [i_4 - 1]))));
                            arr_19 [i_1] [i_4] [(signed char)3] [(unsigned short)7] [i_5] = ((/* implicit */signed char) (unsigned char)76);
                            var_21 = ((/* implicit */unsigned long long int) ((arr_17 [5U] [i_4] [i_4] [i_4] [i_4 - 1] [8]) ? (((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [4])) : (((/* implicit */int) arr_17 [i_4] [i_4] [(unsigned char)9] [i_4] [i_4 - 1] [i_4]))));
                            var_22 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -1089394411)) / (12725659318573682337ULL)));
                            var_23 = ((/* implicit */signed char) (((~(6054803629827173874ULL))) << (((arr_14 [(unsigned char)14]) - (970460309)))));
                        }
                        var_24 += ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_9 [i_2 - 1])))), (((((((/* implicit */_Bool) arr_16 [i_1] [13LL] [(unsigned char)2] [i_4] [(_Bool)1] [(unsigned char)0])) ? (arr_15 [i_1] [i_1] [(signed char)5] [i_1]) : (((/* implicit */long long int) arr_10 [(short)14] [i_3] [i_1])))) <= (((/* implicit */long long int) var_13))))));
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned char) var_4);
    var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16ULL)) ? (1594889665061684996ULL) : (((/* implicit */unsigned long long int) 2150384052U))));
}
