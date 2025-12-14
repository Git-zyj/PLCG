/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173267
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
    var_19 ^= ((/* implicit */signed char) var_2);
    var_20 = ((((/* implicit */_Bool) (((~(((/* implicit */int) var_16)))) + (((((/* implicit */int) (unsigned char)94)) * (((/* implicit */int) var_17))))))) ? (((/* implicit */int) max((var_11), (max((((/* implicit */short) (_Bool)1)), (var_16)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) ((unsigned int) var_4)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_0)))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [6] [(unsigned short)0])) || (((/* implicit */_Bool) arr_0 [i_0 - 3])))))) < ((-(arr_0 [i_0]))))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_1 [(unsigned char)10] [i_0 + 2]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_1 [(signed char)8] [(signed char)8])) % (13656200250410455714ULL))) <= (((/* implicit */unsigned long long int) (~(arr_0 [i_0])))))))) : (((arr_0 [i_0 + 2]) & (arr_0 [i_0 + 1])))));
        var_22 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_9)), (max((((/* implicit */long long int) max((arr_1 [i_0 + 1] [i_0]), (((/* implicit */int) (short)32767))))), (arr_0 [i_0])))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) == (((/* implicit */int) (signed char)-80)))))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (arr_1 [i_0] [i_0 - 3]) : (arr_1 [i_0] [i_0 + 1]))) : (((/* implicit */int) (!(((arr_1 [i_0] [i_0]) >= (-859707663))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_24 += ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 1148019093U)) ? (((/* implicit */unsigned long long int) 158678475)) : (15500412008459887673ULL))));
            var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (arr_5 [i_2] [i_2] [i_1])))) ? (((((/* implicit */_Bool) 2946332065249663943ULL)) ? (var_9) : (-813250717))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
        }
        var_26 *= ((/* implicit */short) 0ULL);
        var_27 = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)7] [i_1]))) % (arr_4 [i_1])))) | (((((/* implicit */unsigned long long int) arr_4 [i_1])) / (2946332065249663942ULL))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [(unsigned char)20] [i_1] [i_1])) ? ((-(((unsigned long long int) arr_4 [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */short) ((15500412008459887672ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))))));
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_5 [i_1] [i_1] [i_1]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 17116650076311611234ULL)) ? (((((/* implicit */int) var_11)) / (-813250717))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) && (((/* implicit */_Bool) var_12))))))) * (((((/* implicit */_Bool) arr_9 [18ULL] [i_3])) ? (((/* implicit */int) arr_9 [(signed char)16] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_3]))))));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_31 = ((unsigned long long int) var_8);
            var_32 = ((/* implicit */_Bool) (-((-(var_15)))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 3; i_5 < 21; i_5 += 4) 
        {
            var_33 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_5 - 3] [i_5])) >> (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_14)))))));
            arr_17 [i_3] [i_5 - 1] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) & (arr_15 [i_3]));
            arr_18 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_7 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3])))))) ? (arr_6 [3U] [(signed char)7]) : (((/* implicit */int) arr_11 [i_3]))));
            arr_19 [i_5] = ((/* implicit */int) arr_12 [i_3] [i_5] [i_5 - 2]);
        }
    }
}
