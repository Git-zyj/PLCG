/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109747
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
    var_11 = (-(0U));
    var_12 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 795255924U)) ? (417919151) : (1537234982)))) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (unsigned char)152))));
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned short) var_9)), ((unsigned short)10))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */long long int) (-(var_0)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4))), (((/* implicit */unsigned int) (unsigned char)152))))) ? (4795711856752903848ULL) : (((((/* implicit */_Bool) (-(arr_4 [i_1])))) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149)))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 4; i_2 < 17; i_2 += 4) 
        {
            var_14 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned short)10))))), (var_0)));
            arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2109802762U)) ? (1610612736U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152)))));
            arr_10 [i_1] [i_1] = ((/* implicit */signed char) (~(arr_7 [i_1] [i_1] [i_1])));
        }
    }
    for (int i_3 = 1; i_3 < 19; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 + 2]))) | (arr_11 [i_3 - 1] [i_3 - 1])))));
        arr_15 [i_3] [i_3] = arr_13 [i_3 + 1];
        arr_16 [i_3] = max((var_0), (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 + 3]))) : (arr_11 [i_3 + 2] [i_3 + 2]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        var_15 = -4044060272171272855LL;
        var_16 ^= ((/* implicit */_Bool) (+(2048)));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    {
                        arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) (unsigned char)0);
                        arr_27 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
                        arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = var_0;
                    }
                } 
            } 
        } 
    }
}
