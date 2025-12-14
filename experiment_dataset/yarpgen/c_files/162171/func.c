/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162171
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-37)), (-542751585)))) : (((((/* implicit */_Bool) var_18)) ? (var_12) : (4294967283U)))))) ? (((((/* implicit */_Bool) ((unsigned int) 7265036641918143131LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : ((-(-2606189032294175971LL))))) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_15)) : (9223372036854775807LL)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))))))) % (((((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) + (((/* implicit */unsigned long long int) 723042644))))));
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (short)6))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((((/* implicit */short) arr_0 [i_1])), (var_9))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0] [i_1])), ((unsigned char)46))))))) : (arr_2 [i_0 + 1] [i_0 + 1] [14]));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) max((2731998782366018575ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 9223372036854775807LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
    var_23 = ((/* implicit */long long int) (((_Bool)1) ? ((+(((/* implicit */int) (signed char)-71)))) : (((((/* implicit */_Bool) min((var_9), (((/* implicit */short) var_10))))) ? ((~(((/* implicit */int) (signed char)-78)))) : (((/* implicit */int) var_13))))));
    /* LoopSeq 2 */
    for (long long int i_3 = 3; i_3 < 16; i_3 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_14 [1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_13 [(signed char)9] [i_4] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)9))) : ((+(arr_6 [i_3] [i_3 + 2])))));
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_10 [i_4]))));
            var_25 += ((/* implicit */unsigned char) arr_2 [(short)9] [(short)9] [(short)9]);
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1])))))));
        }
        var_27 = ((/* implicit */short) arr_7 [i_3 + 1] [i_3] [(signed char)11] [i_3]);
    }
    for (signed char i_5 = 3; i_5 < 19; i_5 += 2) 
    {
        var_28 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (min((((/* implicit */int) arr_15 [i_5 + 1])), (((var_5) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (short)23401)))))) : ((((((-(((/* implicit */int) var_13)))) + (2147483647))) << (((((/* implicit */int) (unsigned char)130)) - (130)))))));
        var_29 = ((/* implicit */unsigned long long int) min((((arr_15 [i_5 + 4]) ? (723042633) : (((/* implicit */int) arr_15 [i_5 + 2])))), (((/* implicit */int) (!(arr_15 [i_5 - 2]))))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) var_3);
            arr_19 [i_6] = ((/* implicit */unsigned int) 18446744073709551615ULL);
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned long long int) arr_15 [i_5]);
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) arr_18 [i_7])) : (9223372036854775807LL))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_21 [i_5 + 1] [i_7])))));
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)117))))) ? ((-(4779548064910337349LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5 - 1] [i_5 + 1])))));
        }
        arr_22 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_11) < ((+(((/* implicit */int) arr_20 [i_5] [i_5])))))))) ^ (((((/* implicit */_Bool) arr_18 [(unsigned short)6])) ? (arr_18 [22LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5 - 2])))))));
    }
}
