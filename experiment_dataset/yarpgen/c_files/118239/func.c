/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118239
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_2 [(short)0] = ((/* implicit */unsigned long long int) var_14);
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_5 [i_0] [(unsigned short)9] |= ((/* implicit */_Bool) -5758243419346903569LL);
            arr_6 [i_0] [(short)2] [i_1] = ((/* implicit */long long int) arr_3 [i_0] [(_Bool)1]);
            arr_7 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_0] [i_1]))));
        }
        for (int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)7507)) ? (((/* implicit */int) (_Bool)1)) : (63)));
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(min((arr_9 [12LL] [i_0 + 1] [(_Bool)1]), (arr_9 [i_0] [i_0 - 1] [i_0 - 1])))));
        }
        for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
        {
            arr_14 [(unsigned short)14] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_3]))) : (3344855204443902630LL)));
            arr_15 [i_3] [(_Bool)1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((3741044660U), (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521))) : (min((2236942676254632537LL), (((/* implicit */long long int) 3741044660U)))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            arr_18 [i_0 - 1] [i_4] = ((/* implicit */unsigned short) min((-7835543700738265500LL), (-2236942676254632537LL)));
            arr_19 [i_4] [i_4] [(unsigned short)13] = ((/* implicit */unsigned int) min((-7835543700738265500LL), (((/* implicit */long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_11)))))));
            arr_20 [i_4] = ((((/* implicit */long long int) ((/* implicit */int) var_2))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))) / (min((-7835543700738265504LL), (2236942676254632519LL))))));
        }
        arr_21 [11LL] [11LL] = ((/* implicit */unsigned int) arr_0 [i_0 + 1]);
    }
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    arr_29 [i_6] = ((/* implicit */short) min((5755480480567052817LL), (((/* implicit */long long int) (unsigned short)0))));
                    arr_30 [13U] [i_7] [i_7] [i_5] = ((/* implicit */short) arr_26 [i_7]);
                    arr_31 [i_7] [i_6] [i_5] = ((/* implicit */signed char) min((arr_25 [i_5] [i_5] [i_5]), (((/* implicit */int) arr_22 [i_5]))));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 3; i_8 < 18; i_8 += 1) 
                    {
                        arr_34 [(signed char)7] [18U] [i_6] [14] [14] [i_6] = ((/* implicit */_Bool) var_1);
                        arr_35 [i_5] [i_5] = ((/* implicit */_Bool) 4064233075156870008ULL);
                    }
                    arr_36 [i_7] = ((/* implicit */short) (+(17487616416713412423ULL)));
                }
            } 
        } 
    } 
}
