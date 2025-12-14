/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101211
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
    var_12 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) var_7)), (var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (arr_9 [i_3 + 2] [i_2] [i_1] [i_0])))) ? (((/* implicit */int) arr_6 [i_3 - 1])) : (((((/* implicit */_Bool) var_2)) ? (501985640) : (((/* implicit */int) var_7)))))))));
                        arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) ((signed char) max((var_4), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_4 = 1; i_4 < 11; i_4 += 2) 
        {
            var_14 = ((/* implicit */unsigned char) arr_6 [i_0]);
            var_15 *= ((/* implicit */short) arr_5 [i_4] [i_0]);
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (int i_6 = 2; i_6 < 10; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        {
                            var_16 += ((/* implicit */unsigned int) ((int) var_4));
                            arr_21 [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */int) arr_14 [i_4])) ^ (((/* implicit */int) arr_14 [i_4])))) << ((+(((unsigned int) var_8))))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned short) (-((-(arr_20 [i_0] [i_0 + 4] [i_0] [i_0 + 4] [i_0])))))))));
            var_18 -= ((/* implicit */long long int) var_2);
        }
        arr_22 [i_0 - 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
        arr_23 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_1 [i_0 - 3]), (var_7))))));
    }
    for (short i_8 = 3; i_8 < 9; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_9 = 2; i_9 < 10; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                {
                    var_19 = (-((((_Bool)1) ? (((/* implicit */int) arr_30 [i_8 - 3] [i_9] [i_10] [i_9 + 2])) : (((/* implicit */int) arr_30 [i_8 + 3] [i_10] [i_9 - 1] [i_8 + 3])))));
                    arr_31 [i_10] [i_9] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */int) (!(max(((_Bool)1), ((_Bool)1)))))) != (((((/* implicit */int) (unsigned short)35517)) ^ (((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
        arr_32 [i_8] = ((/* implicit */unsigned short) (~(max((((/* implicit */int) arr_30 [i_8] [i_8] [i_8] [i_8])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_25 [i_8]))))))));
        var_20 ^= ((/* implicit */unsigned char) arr_25 [i_8]);
    }
    var_21 = ((/* implicit */unsigned char) var_7);
    var_22 ^= ((/* implicit */unsigned short) (~(max((var_5), (((/* implicit */unsigned long long int) (~(var_11))))))));
}
