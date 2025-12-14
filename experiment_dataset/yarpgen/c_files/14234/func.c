/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14234
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)24185)) : (((/* implicit */int) (short)(-32767 - 1)))))), (min((((/* implicit */unsigned long long int) 16777152U)), (6368771759435142006ULL))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0]));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_10 ^= ((/* implicit */signed char) ((6368771759435142006ULL) == (((/* implicit */unsigned long long int) ((unsigned int) 1650994528)))));
        var_11 = ((unsigned char) -8651451094490915037LL);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)0])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (arr_6 [i_1])))) ? (((long long int) arr_5 [i_1] [i_1])) : (((/* implicit */long long int) max((arr_6 [i_1]), (((/* implicit */int) arr_5 [i_1] [i_1])))))));
    }
    for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_12 ^= ((/* implicit */long long int) arr_9 [16LL]);
        var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_10 [i_2]), (((/* implicit */int) arr_9 [18U]))))) ? (((/* implicit */int) ((arr_10 [i_2]) == (((/* implicit */int) arr_9 [4]))))) : (((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_3])) / (((/* implicit */int) arr_1 [i_3])))) + (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (unsigned short)51663)))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (((((/* implicit */_Bool) 132044840)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))) : ((-(((((/* implicit */_Bool) arr_5 [i_5] [i_4])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)1] [i_4])))))))))));
                    arr_17 [(short)0] [i_4] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) arr_14 [i_3])))), ((((!(((/* implicit */_Bool) arr_0 [i_3])))) ? ((~(132044870))) : (((arr_7 [(_Bool)1]) ? (arr_15 [i_3]) : (((/* implicit */int) arr_16 [i_5] [i_4] [i_3] [(signed char)2]))))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_3]))))) ? (max((((/* implicit */unsigned long long int) var_1)), (4762778747514906467ULL))) : (((/* implicit */unsigned long long int) arr_10 [i_5]))))) ? (max((((arr_10 [i_4]) ^ (((/* implicit */int) arr_1 [i_3])))), (((/* implicit */int) ((unsigned char) arr_10 [i_5]))))) : (((/* implicit */int) (!(((_Bool) arr_11 [i_3])))))));
                    var_17 = ((/* implicit */int) arr_1 [i_5]);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 2; i_6 < 22; i_6 += 3) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_6 + 1] [i_6 + 1])) && (arr_22 [i_6 + 1] [16U] [(unsigned short)20])))) % (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_9))))) ^ (arr_21 [i_6 + 2] [i_7]))))))));
                var_19 = ((((((unsigned int) (unsigned short)7156)) != (((4278190144U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_6]))))))) ? (((((/* implicit */_Bool) 16777146U)) ? (((/* implicit */int) arr_19 [i_6 + 1] [5LL])) : ((~(((/* implicit */int) arr_19 [i_6] [i_6])))))) : (((/* implicit */int) var_7)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 12; i_8 += 4) 
    {
        for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [i_8] [i_8] [(signed char)3] [(unsigned short)0])) + (2147483647))) << (((int) ((((/* implicit */int) arr_5 [(_Bool)0] [i_9])) == (((/* implicit */int) arr_20 [i_9])))))));
                arr_31 [i_9] [i_9] = ((/* implicit */signed char) arr_22 [i_9] [23LL] [23LL]);
                var_21 += ((((/* implicit */_Bool) (-(((unsigned int) var_4))))) ? (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13858))))), (((arr_25 [i_9]) ? (arr_6 [(unsigned short)4]) : (((/* implicit */int) (unsigned char)152))))))) : (arr_11 [i_8]));
            }
        } 
    } 
    var_22 = ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_9)))) : (((/* implicit */int) (signed char)122)))) != (((/* implicit */int) (_Bool)1)));
    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2147483632))));
}
