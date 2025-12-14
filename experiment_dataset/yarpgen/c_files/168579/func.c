/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168579
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
    var_19 = ((/* implicit */_Bool) var_13);
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (signed char)9))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) | (-6688508278005471229LL)))))) : ((~(6688508278005471221LL)))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max((((((/* implicit */_Bool) min(((unsigned short)58952), (((/* implicit */unsigned short) (_Bool)1))))) ? (arr_0 [i_0 + 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0])))))), (((/* implicit */unsigned long long int) ((max((arr_0 [i_0] [(short)8]), (((/* implicit */unsigned long long int) (signed char)3)))) == (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_0 [i_0 - 1] [i_0 - 1])))))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((max(((unsigned short)65522), (((/* implicit */unsigned short) (signed char)-10)))), (((/* implicit */unsigned short) ((_Bool) 8486877000712720217LL))))))) - (0ULL)));
                        arr_11 [i_0] [i_0] [i_2] [(unsigned char)15] = ((int) ((((/* implicit */_Bool) (signed char)-50)) ? (33552384ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_17)) ^ (arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) arr_5 [i_4] [i_4] [i_4]);
            arr_14 [i_0] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_0] [i_0] [i_4]), (arr_7 [i_0] [i_0] [i_0] [(signed char)12])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_0 + 1] [(signed char)5]), ((_Bool)1))))) : (min((var_9), (((/* implicit */long long int) var_12))))))) ? (((/* implicit */unsigned int) ((arr_3 [i_0 + 1] [i_0 - 1]) ? (arr_1 [i_0 + 2]) : (((/* implicit */int) ((unsigned short) arr_5 [i_0 + 2] [i_4] [(unsigned char)14])))))) : (arr_13 [i_4] [i_0 - 1] [i_0 - 1])));
            var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_6 [i_0] [i_0 - 1] [i_0]), (((/* implicit */int) arr_3 [(signed char)4] [i_4]))))) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0 + 1])) : (arr_0 [i_4] [i_0 + 1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_4] [i_4])))));
        }
        var_25 = ((/* implicit */unsigned long long int) var_3);
    }
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_5] [i_5]))))), (min((arr_15 [i_5] [i_5]), (arr_15 [i_5] [i_5]))))))));
        var_27 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) max((((/* implicit */short) var_13)), (arr_8 [i_5] [i_5])))) ? (((arr_3 [(short)6] [(short)6]) ? (((/* implicit */unsigned long long int) var_10)) : (185310586464670771ULL))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 1163438053)) : (var_8))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (_Bool)1))));
        var_29 = ((short) (-(((/* implicit */int) var_2))));
        arr_20 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)6)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6]))))) * (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (var_10))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6]))) / (arr_19 [i_6] [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6] [i_6]))) : (-4320550954320559632LL))) : (((/* implicit */long long int) min((((arr_17 [i_6] [i_6]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)67)))), (((/* implicit */int) (signed char)21)))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */short) var_10);
        var_31 = (((_Bool)1) ? (-4442855089386652654LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
        arr_23 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_19 [i_7] [i_7]) * (((((/* implicit */_Bool) -2305843009213693952LL)) ? (arr_19 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7] [i_7]))) | (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7]))) : (var_11)))) : (max((((/* implicit */long long int) var_11)), (-4050906355763449323LL))))))));
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) var_6))))))) ? (max((((((/* implicit */_Bool) (short)26551)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_21 [i_7] [i_7])))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_17 [i_7] [i_7]))) || (((/* implicit */_Bool) ((arr_17 [i_7] [i_7]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)26551))))))))));
    }
}
