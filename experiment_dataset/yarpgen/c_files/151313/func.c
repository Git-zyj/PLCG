/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151313
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [11U] = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)2)), (2147483647)));
        var_11 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-44))) & (18446744073709551607ULL));
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-2)) ? (17922756064205237941ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) max(((signed char)-35), ((signed char)109))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned long long int) ((((_Bool) (signed char)-35)) ? (arr_11 [i_3 + 2] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131)))))) : (max((((/* implicit */unsigned long long int) (-(-18)))), (1368208323154655846ULL)))));
                        arr_13 [i_0] [i_0] [i_2] [(_Bool)1] [i_3] |= ((/* implicit */unsigned int) (short)32001);
                        var_15 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1] [(unsigned char)12] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 2] [i_3 + 2] [i_3 - 1]))) : (9223372036854775799LL))) - (((/* implicit */long long int) 2147483647))));
                        arr_14 [i_0] [i_1] [i_3] [i_3 + 1] = ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) arr_5 [i_2])) : (arr_8 [(signed char)5] [i_1] [(signed char)0] [(_Bool)1])))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_1] [i_1] [i_0])), (16)))) : (arr_11 [i_3] [i_3] [i_3] [i_1])))) : (((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (16478344821847466582ULL))));
                    }
                } 
            } 
        }
        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            arr_17 [i_0] |= ((/* implicit */unsigned int) arr_8 [i_4 + 1] [i_4] [i_0] [i_4]);
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                arr_20 [i_5] [2ULL] [i_4] [i_0] = ((/* implicit */unsigned int) (+(max((((/* implicit */int) (unsigned char)195)), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)86))))))));
                /* LoopSeq 1 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_7 = 3; i_7 < 14; i_7 += 3) 
                    {
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)2)) ? (-1737986396) : (((/* implicit */int) arr_25 [i_4 + 1] [i_4] [i_4 + 2] [i_4] [i_4] [i_4 + 3]))))) <= (((((/* implicit */_Bool) 11250258924868030499ULL)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) -17)))))))));
                        arr_26 [i_0] [i_0] [i_5] [i_6] [i_5] [i_7] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (arr_24 [i_5] [i_4])))))) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_5] [6ULL] [6ULL] [(signed char)1])) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)56)), ((unsigned char)144))))));
                        arr_27 [(unsigned char)1] [i_5] [(unsigned char)1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -2895632231716908163LL)) ? (((/* implicit */int) min(((unsigned char)250), ((unsigned char)182)))) : (((/* implicit */int) arr_12 [i_4 + 3] [i_6 - 1] [i_7] [i_4 + 3])))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)251)) <= (((/* implicit */int) (short)-25353)))))));
                        arr_28 [i_0] [i_4] [i_5] [i_6] [(unsigned char)14] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-127)) ? (arr_22 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6)))))) ? (max((((/* implicit */unsigned long long int) (signed char)-87)), (arr_24 [i_6] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7 - 1] [i_4 + 1] [i_6 - 1]))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-20)) ? (arr_2 [i_4 - 1]) : (((/* implicit */int) (_Bool)0)))) > (((((/* implicit */_Bool) 5445546150741142002ULL)) ? (((/* implicit */int) arr_4 [i_0] [(signed char)14] [i_5])) : (10))))))));
                        arr_29 [i_0] [i_4] [i_7] [i_6] [i_7] = ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned char)192)) | (((/* implicit */int) (signed char)-100)))), (((/* implicit */int) (unsigned char)30))));
                    }
                    arr_30 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-124)))), (((((/* implicit */_Bool) min(((short)31), (((/* implicit */short) (unsigned char)17))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1)))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19))) : (331205768836150512ULL)))))));
                }
                var_17 = ((/* implicit */signed char) ((4184745989U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37)))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    for (signed char i_9 = 3; i_9 < 11; i_9 += 1) 
                    {
                        {
                            arr_37 [i_9] = ((/* implicit */unsigned short) ((3732436314U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66)))));
                            arr_38 [i_0] [i_4] [i_5] [(_Bool)0] [i_9] = ((/* implicit */int) (signed char)127);
                        }
                    } 
                } 
            }
            for (signed char i_10 = 1; i_10 < 12; i_10 += 4) 
            {
                var_18 += ((/* implicit */long long int) max((2620855209U), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)(-127 - 1))))))));
                arr_41 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))) >= (((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_10] [i_10] [i_10 - 1] [0LL] [0LL] [i_4 + 3]))) & (3270452298U)))));
            }
        }
    }
    var_19 = ((/* implicit */unsigned long long int) -1052323064);
    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) ((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
}
