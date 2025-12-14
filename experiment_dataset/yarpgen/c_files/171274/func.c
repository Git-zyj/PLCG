/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171274
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2 + 1] [(_Bool)1] [i_2] = ((/* implicit */int) max(((-(5179194229328311019ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_2 - 2] [i_2 - 2] [i_3])) : (((/* implicit */int) arr_8 [i_2 - 2] [i_2 - 2] [i_3])))))));
                        arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) ^ (((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_1] [i_3])) ? (3411966430U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))))) ? (max(((-(((/* implicit */int) arr_3 [i_2])))), (((((/* implicit */_Bool) (short)-32638)) ? (((/* implicit */int) (short)32637)) : (((/* implicit */int) (short)32645)))))) : (((/* implicit */int) arr_9 [i_2 - 2] [(unsigned short)9] [i_2] [i_3]))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)0]))) ^ (((((/* implicit */_Bool) 3920888212U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)228))) : (-2905420641848948075LL))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
        arr_13 [(_Bool)1] = ((/* implicit */_Bool) (-(-6079702882267903162LL)));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_4 + 1] [i_4] [i_4]))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (signed char i_8 = 1; i_8 < 17; i_8 += 1) 
                        {
                            {
                                arr_28 [i_4] [i_5] [i_6] [i_4] [i_7] [i_8] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -938755033936228226LL)) ? (((/* implicit */int) arr_21 [i_7])) : (((/* implicit */int) arr_21 [i_7]))));
                                arr_29 [i_4] [i_4] = arr_15 [i_8];
                                arr_30 [i_8] [i_7] [i_7] [i_5] [i_4] &= -938755033936228226LL;
                            }
                        } 
                    } 
                    var_22 = ((((/* implicit */int) arr_15 [i_4 + 1])) != (((/* implicit */int) arr_15 [i_4 + 1])));
                }
            } 
        } 
        arr_31 [i_4] [i_4] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_14 [i_4 + 1] [i_4])) : (((/* implicit */int) var_16))));
    }
    var_23 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (938755033936228207LL)));
}
