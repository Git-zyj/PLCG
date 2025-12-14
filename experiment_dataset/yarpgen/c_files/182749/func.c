/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182749
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
    var_19 = ((/* implicit */int) ((short) var_16));
    var_20 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (var_9)))), (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) % (((((/* implicit */int) (short)5)) - (((/* implicit */int) (unsigned char)254))))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned char) ((int) var_12));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))))) ? (arr_1 [i_0]) : (((var_15) ^ (arr_0 [i_0] [i_1]))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)253)))))))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-911274719)))) ? (min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_6 [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))))) ? (((/* implicit */int) min(((!(arr_7 [i_1] [i_1]))), (((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_14))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1])) >> (((((/* implicit */int) (signed char)33)) - (31)))))) ? (((((/* implicit */int) var_13)) & (((/* implicit */int) arr_4 [i_0] [i_0])))) : (((/* implicit */int) var_2))))));
        }
        for (short i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            arr_14 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((-9014916314803949802LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18)))))) ? (min((((/* implicit */int) min((arr_4 [i_2] [i_0]), (((/* implicit */unsigned char) arr_7 [i_0] [i_2]))))), (min((0), (var_6))))) : (((((((/* implicit */int) min((((/* implicit */short) var_8)), ((short)(-32767 - 1))))) + (2147483647))) << (((((((/* implicit */_Bool) 8328629153174966623LL)) ? (arr_0 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))))) - (270631170U)))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                arr_17 [i_0] [i_3] [i_0] = ((/* implicit */short) min((min((min((((/* implicit */long long int) var_5)), (arr_12 [i_2 + 3] [i_0]))), (((/* implicit */long long int) min((var_12), (((/* implicit */short) arr_16 [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_0])) ^ (min((((/* implicit */int) var_3)), (var_6))))))));
                arr_18 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (var_15))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) arr_13 [i_0]))))))))) : (min((((/* implicit */long long int) arr_2 [i_3])), (arr_12 [i_0] [i_3])))));
                arr_19 [i_3] [i_2 + 2] [i_2 + 2] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_16 [i_0]), (((/* implicit */unsigned char) arr_13 [i_0]))))) ? (min((((/* implicit */int) arr_4 [i_0] [i_0])), (-12))) : (((/* implicit */int) ((unsigned char) var_7)))))) || (((/* implicit */_Bool) ((int) min((((/* implicit */int) (_Bool)1)), (0)))))));
            }
        }
        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            arr_22 [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((2060380896U) > (((/* implicit */unsigned int) 0))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)5), (((/* implicit */unsigned short) arr_4 [i_0] [i_4])))))) : (arr_11 [i_0] [i_0] [i_4])))));
            arr_23 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */long long int) ((((arr_13 [i_4]) ? (((/* implicit */int) var_5)) : (var_6))) ^ (((/* implicit */int) ((signed char) arr_6 [i_0] [i_4])))))) : (var_4)));
            arr_24 [i_4] [i_4] = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) (short)-21345)))));
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                for (signed char i_6 = 2; i_6 < 18; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            arr_36 [i_0] [i_4] [i_5] [i_6] [i_7] [i_4] [i_6 + 1] = ((/* implicit */signed char) (((+(((((/* implicit */int) arr_13 [i_7])) & (((/* implicit */int) (short)-25241)))))) < (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_5])) && (((/* implicit */_Bool) arr_15 [i_0] [i_6]))))) : (var_6)))));
                            arr_37 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */signed char) arr_7 [i_5] [i_6])), (min((arr_29 [i_0] [i_7] [i_5] [i_6] [i_7] [i_6]), (((/* implicit */signed char) var_18))))))) % (((/* implicit */int) min(((short)(-32767 - 1)), ((short)-32767))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_8 = 2; i_8 < 21; i_8 += 4) 
        {
            arr_42 [i_0] [i_0] [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_16 [i_8])) - (((/* implicit */int) (short)-21345)))))), (arr_6 [i_0] [i_0])));
            arr_43 [i_0] [i_8] [i_8] = ((/* implicit */int) ((unsigned int) min((arr_32 [i_8 - 2] [i_8 - 1] [i_8 - 1] [i_8 - 2]), (((/* implicit */unsigned char) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
            arr_44 [i_0] [i_0] [i_8] = ((/* implicit */signed char) ((min((arr_26 [i_0]), (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) * (((/* implicit */int) ((((/* implicit */int) arr_29 [i_0] [i_0] [i_8] [i_8 - 1] [i_8] [i_8])) <= (((((/* implicit */_Bool) arr_20 [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-72)))))))));
        }
    }
}
