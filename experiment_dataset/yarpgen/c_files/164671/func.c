/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164671
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
    var_10 = ((/* implicit */int) ((((/* implicit */int) var_4)) != (((((/* implicit */int) var_5)) << (((((((((/* implicit */int) var_7)) * (((/* implicit */int) var_0)))) + (566354))) - (18)))))));
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_11 *= ((/* implicit */signed char) var_6);
        arr_2 [2] = ((((/* implicit */int) min((var_6), (((/* implicit */short) var_4))))) + (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_0))))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */long long int) max((((((/* implicit */int) var_7)) % (((/* implicit */int) var_1)))), (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_9)))))));
                        var_13 = ((/* implicit */unsigned int) max((((((/* implicit */int) var_7)) - (((/* implicit */int) var_5)))), (((/* implicit */int) min((var_6), (((/* implicit */short) var_7)))))));
                        arr_9 [i_3] [17] [i_2] [i_3] [i_3] = ((/* implicit */short) ((signed char) min((var_0), (var_2))));
                        var_14 = ((/* implicit */short) ((((/* implicit */int) var_1)) != (max((((((/* implicit */int) var_0)) / (((/* implicit */int) var_3)))), (((/* implicit */int) var_5))))));
                        var_15 -= ((/* implicit */short) ((((((/* implicit */int) var_8)) / (((/* implicit */int) var_5)))) - (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_1))))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 2; i_4 < 21; i_4 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((short) ((signed char) var_1))))));
        arr_12 [11] [19U] |= ((/* implicit */unsigned int) min((((((/* implicit */int) var_4)) - (((/* implicit */int) max((var_6), (var_0)))))), (((((((/* implicit */int) var_6)) - (((/* implicit */int) var_1)))) - (((/* implicit */int) ((signed char) var_3)))))));
        var_17 += ((/* implicit */_Bool) ((((((/* implicit */int) var_5)) * (((/* implicit */int) var_1)))) | (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_2))))))));
    }
    for (short i_5 = 2; i_5 < 21; i_5 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((_Bool) ((int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_7))))));
                            arr_25 [i_5 + 1] [7U] [i_6] [i_7] [i_6] [i_8] [i_9] = ((((((/* implicit */int) ((unsigned short) var_2))) / (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_6))))))) / (((((((/* implicit */int) var_6)) + (2147483647))) << (((((((/* implicit */int) (unsigned short)49961)) - (((/* implicit */int) (unsigned short)15575)))) - (34386))))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_10 = 2; i_10 < 19; i_10 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_7))));
                            arr_28 [i_5 - 2] [(unsigned short)18] [i_7] [i_5 - 2] [i_8] [i_10] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) && (var_9)));
                        }
                        for (short i_11 = 1; i_11 < 20; i_11 += 3) 
                        {
                            arr_32 [i_5 + 1] [i_5 + 1] [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */short) ((_Bool) var_1))), (max((((/* implicit */short) var_8)), (var_2)))));
                            var_20 += ((/* implicit */long long int) ((((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_5))))) - (((/* implicit */int) ((_Bool) var_4)))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_21 = ((/* implicit */int) ((((long long int) var_0)) == (((/* implicit */long long int) ((/* implicit */int) min((var_5), (((/* implicit */short) var_9))))))));
                            var_22 |= ((/* implicit */_Bool) ((((/* implicit */int) max((var_5), (((/* implicit */short) var_9))))) & (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_8)))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_1)))) % (((((/* implicit */int) var_5)) | (((/* implicit */int) var_5))))));
                            var_24 = ((/* implicit */int) min((var_24), (((((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_1)))) - (((/* implicit */int) max((((/* implicit */short) var_7)), (var_0))))))));
                        }
                        var_25 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_1)) <= (((/* implicit */int) max((((/* implicit */short) var_4)), (var_0)))))));
                    }
                } 
            } 
        } 
        var_26 |= ((/* implicit */_Bool) ((unsigned short) min((var_3), (((/* implicit */unsigned short) var_4)))));
        /* LoopNest 3 */
        for (signed char i_13 = 3; i_13 < 19; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                for (unsigned short i_15 = 4; i_15 < 20; i_15 += 2) 
                {
                    {
                        var_27 = ((/* implicit */short) var_4);
                        var_28 = ((/* implicit */signed char) var_1);
                    }
                } 
            } 
        } 
        arr_46 [i_5] [i_5] = var_4;
    }
    /* vectorizable */
    for (short i_16 = 2; i_16 < 21; i_16 += 2) /* same iter space */
    {
        var_29 ^= ((/* implicit */short) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_5))));
        var_30 = ((/* implicit */_Bool) ((signed char) var_7));
    }
    var_31 |= ((/* implicit */_Bool) var_6);
    var_32 = ((/* implicit */_Bool) var_8);
    var_33 = ((/* implicit */unsigned char) ((min((((/* implicit */int) var_4)), (((((/* implicit */int) var_0)) & (((/* implicit */int) var_1)))))) >= (((/* implicit */int) ((unsigned short) var_4)))));
}
