/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131235
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [(unsigned short)19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)64948))));
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_16 = ((/* implicit */signed char) ((unsigned int) arr_0 [i_0]));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
        var_17 = ((max((((/* implicit */unsigned int) max((arr_4 [(signed char)4] [i_1]), (((/* implicit */unsigned short) arr_1 [i_1] [i_1]))))), (min((1450581012U), (0U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [15ULL]))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            for (signed char i_3 = 2; i_3 < 12; i_3 += 3) 
            {
                {
                    var_18 = max((max((((/* implicit */unsigned long long int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2] [(unsigned short)10])))))), (max((2638992680541132856ULL), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2])))))), (((/* implicit */unsigned long long int) (unsigned short)13618)));
                    var_19 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) var_13)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (+(3624062673U)))))))));
                    var_20 = ((/* implicit */unsigned int) max((((/* implicit */short) var_15)), (((short) ((((/* implicit */_Bool) 93152780126625530ULL)) ? (arr_9 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 2; i_4 < 13; i_4 += 4) 
                    {
                        arr_14 [i_1] [i_2] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((-1LL) < (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [(unsigned char)11] [i_1] [i_1] [i_2]))))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)22445)), (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_2]), (((/* implicit */short) var_13)))))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_2] [(short)4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)96))) : (arr_9 [i_2]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [11U])) ? (arr_11 [i_2] [i_2 + 1] [i_2 + 1] [i_4 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (signed char)5))))))))));
                        var_21 = ((/* implicit */signed char) ((unsigned int) arr_7 [i_2] [i_2]));
                        arr_15 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_3] [2ULL] [i_2 + 1] [i_2]))) - (arr_11 [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */int) ((unsigned short) arr_11 [i_2] [i_2 + 1] [i_3 + 2] [i_4 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-33)))))));
                        var_22 = ((/* implicit */unsigned char) arr_0 [i_2]);
                        var_23 = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */long long int) var_12)), (-5421534760730768247LL))));
                    }
                    arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) (short)-31408)))))) * (((/* implicit */int) arr_4 [12U] [i_2]))));
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) ((((unsigned long long int) arr_7 [i_1] [i_1])) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_23 [i_5])))), ((!(((/* implicit */_Bool) ((signed char) var_10)))))));
                        arr_24 [i_1] [i_6] [(signed char)4] [i_1] |= ((/* implicit */short) 3847753798989346272LL);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        var_26 = ((/* implicit */unsigned long long int) var_1);
        arr_29 [(signed char)17] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_26 [i_8] [(unsigned short)13])) ? (18287625323378184357ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) arr_26 [(short)0] [i_8])))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_8])) * (((/* implicit */int) arr_28 [i_8])))))));
    }
    var_27 = ((/* implicit */unsigned int) var_15);
    var_28 = ((/* implicit */_Bool) ((1073741824U) % (3525939029U)));
}
