/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175564
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
    var_20 = ((/* implicit */unsigned long long int) 4032U);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (unsigned short)58213))));
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max((arr_0 [i_0]), (((arr_0 [8LL]) / (arr_0 [i_0]))))))));
        arr_2 [22ULL] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)7322)) || (((/* implicit */_Bool) (unsigned short)58210)))) && (((/* implicit */_Bool) (unsigned short)58220))));
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned short) (unsigned short)58183));
    }
    for (unsigned short i_1 = 3; i_1 < 16; i_1 += 1) 
    {
        var_23 += ((/* implicit */int) ((unsigned long long int) var_10));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [(_Bool)1])), ((unsigned short)58207)))) + (((/* implicit */int) (_Bool)1))))));
            var_24 = (i_1 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((arr_9 [i_1]) + (2147483647))) << (((((arr_9 [i_1]) + (1091450679))) - (23)))))) == (((min((85198559194908362ULL), (((/* implicit */unsigned long long int) var_12)))) * (((/* implicit */unsigned long long int) arr_8 [i_1 - 2]))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((arr_9 [i_1]) - (2147483647))) + (2147483647))) << (((((((arr_9 [i_1]) + (1091450679))) - (23))) - (1234409403)))))) == (((min((85198559194908362ULL), (((/* implicit */unsigned long long int) var_12)))) * (((/* implicit */unsigned long long int) arr_8 [i_1 - 2])))))));
            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) arr_7 [i_1 + 1])) * (2043552616938845979ULL))));
            arr_12 [i_1] [i_2] = ((/* implicit */_Bool) arr_8 [i_1]);
            var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-19696)))) == (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) var_14)) : (18361545514514643254ULL))))))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            var_26 *= ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) arr_6 [i_1])));
            var_27 = ((/* implicit */int) arr_13 [i_1] [11ULL]);
            /* LoopSeq 2 */
            for (signed char i_4 = 2; i_4 < 16; i_4 += 4) 
            {
                var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_15 [i_4] [i_4]))) ? (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) arr_13 [i_1] [(unsigned short)1])) : (((/* implicit */int) arr_13 [i_3 + 4] [i_3 + 4]))))) : ((-(721385263U)))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    var_29 = ((/* implicit */unsigned short) var_5);
                    arr_19 [i_1] [6] [i_4] [i_1] [(unsigned char)0] [i_1] = ((/* implicit */unsigned short) var_0);
                }
            }
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                var_30 *= ((/* implicit */unsigned long long int) ((var_6) * (((/* implicit */unsigned int) arr_8 [i_1 + 1]))));
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4073877724U)) ? (((/* implicit */int) (short)19685)) : (((/* implicit */int) (unsigned short)0))));
            }
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_26 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_8 [i_1 - 2])) && (((/* implicit */_Bool) arr_8 [i_1 + 1])))), ((!(((/* implicit */_Bool) arr_8 [i_1 - 3]))))));
            arr_27 [i_1] [i_1] = ((/* implicit */unsigned short) ((var_5) ? (((int) arr_13 [i_7] [12])) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1747933521U)) || (((/* implicit */_Bool) 219663793U))))))));
            arr_28 [i_1] = max(((~(((/* implicit */int) arr_20 [i_1 - 2] [i_1 - 2] [i_1])))), (((268435455) | (((/* implicit */int) arr_20 [i_1 - 2] [i_1 - 2] [i_7])))));
            arr_29 [i_1] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) min((arr_13 [(unsigned short)16] [i_1 - 3]), (((/* implicit */unsigned char) (_Bool)1))))))), (((int) arr_14 [i_1] [i_1]))));
        }
    }
    for (int i_8 = 2; i_8 < 19; i_8 += 1) 
    {
        var_32 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_8])) || (((/* implicit */_Bool) 85198559194908384ULL)))));
        arr_32 [13U] [13U] = ((/* implicit */int) 85198559194908367ULL);
        arr_33 [1U] [i_8 + 1] = ((/* implicit */signed char) ((unsigned short) arr_31 [i_8] [14]));
        var_33 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1211210303)), (15483162199207646568ULL)));
        arr_34 [i_8] [i_8] = ((/* implicit */int) max((min((16403191456770705654ULL), (((/* implicit */unsigned long long int) (unsigned short)27250)))), (((/* implicit */unsigned long long int) arr_30 [i_8 - 2]))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_34 += ((/* implicit */signed char) min((((2043552616938845972ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))))), (((/* implicit */unsigned long long int) (unsigned short)29583))));
        arr_38 [i_9] [i_9] = ((/* implicit */unsigned short) (-(4475582180193230079ULL)));
        var_35 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) arr_25 [i_9])))));
        var_36 = ((/* implicit */_Bool) (unsigned short)44712);
        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) min((((unsigned int) arr_21 [i_9] [(signed char)7])), (((((/* implicit */_Bool) (short)-19696)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39289))) : (1160752811U))))))));
    }
}
