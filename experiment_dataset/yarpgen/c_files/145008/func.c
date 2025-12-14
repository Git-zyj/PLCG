/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145008
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
    var_15 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) max((((arr_1 [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))), (((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0 + 2])))))));
        var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) min(((!(arr_1 [i_0 + 1]))), (((((/* implicit */int) arr_0 [i_0 + 2])) > (((/* implicit */int) arr_1 [i_0]))))))), (((arr_1 [i_0 + 1]) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_0 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 + 2]);
    }
    var_19 = min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (unsigned short)36837))))), (max((var_14), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28699)) << (((((/* implicit */int) (unsigned short)28698)) - (28697))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        var_20 &= ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_1 + 1] [i_1 - 1])))) % (min((13198130870258380353ULL), (((/* implicit */unsigned long long int) (unsigned char)224)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_5 [i_1] [(unsigned char)15]) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)36857))) - (3061498580728240411LL))))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
            {
                for (int i_4 = 2; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) arr_12 [i_1] [i_2]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_5 = 1; i_5 < 16; i_5 += 4) 
                        {
                            arr_18 [i_1] [i_2 - 2] [i_2 - 2] [i_4] [i_5 + 1] &= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (arr_15 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_3 + 1] [i_5 - 1] [i_2 + 1])))));
                            arr_19 [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 2] [i_1 + 1])) % (((/* implicit */int) (_Bool)1))));
                            arr_20 [(unsigned char)3] [(unsigned char)4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1 + 1] [(_Bool)1] [i_2 - 2] [i_3] [i_5 - 1] [i_5 - 1]))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_3] [(_Bool)1] [i_5 - 1])) << (((((((/* implicit */_Bool) (unsigned short)36845)) ? (13198130870258380350ULL) : (5248613203451171263ULL))) - (13198130870258380330ULL))))))));
                        }
                        arr_21 [i_2] [i_3 + 3] [i_2] = ((/* implicit */unsigned short) max((min((arr_6 [i_2]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1 + 1]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_12 [i_1 + 1] [i_2 - 1])) : (((/* implicit */int) (unsigned char)224)))))));
                        arr_22 [i_1] [i_2 - 1] [i_3 - 1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_1 + 2] [i_2 + 1] [i_4 - 2] [i_4])) / (((/* implicit */int) arr_10 [i_1 + 2] [i_2 + 1] [i_4 - 2] [i_4 - 1]))))) / (((min((((/* implicit */unsigned int) (short)17302)), (arr_6 [i_2 + 1]))) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_3])))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_6 = 1; i_6 < 17; i_6 += 2) 
    {
        var_23 = ((/* implicit */long long int) (unsigned char)255);
        arr_25 [i_6] = ((/* implicit */signed char) min(((+(((/* implicit */int) max((var_6), (var_6)))))), (max((((((/* implicit */int) (short)30178)) - (((/* implicit */int) var_2)))), (((((/* implicit */int) arr_24 [i_6])) - (((/* implicit */int) (short)-32763))))))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 3; i_7 < 22; i_7 += 3) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_7] [i_7 - 3])) ? (((/* implicit */int) arr_26 [i_7 - 1] [i_7 - 3])) : (((/* implicit */int) arr_26 [i_7 - 1] [i_7 - 1]))));
        var_25 = ((((((/* implicit */int) var_13)) >= (((/* implicit */int) arr_26 [i_7] [i_7 + 1])))) ? (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_26 [i_7] [i_7 - 2]))))) : (((/* implicit */int) arr_26 [i_7] [i_7 + 1])));
    }
}
