/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119605
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
    var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (signed char)127))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_0] [i_0 + 1] [i_0 + 1]))) ? (((/* implicit */unsigned long long int) var_10)) : (max((max((((/* implicit */unsigned long long int) var_12)), (arr_4 [i_2 - 3] [i_1] [i_2 - 2]))), (((/* implicit */unsigned long long int) var_9))))));
                    var_14 = ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]);
                    arr_10 [(short)9] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_1 [i_0 + 1])))));
                    arr_11 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [(_Bool)1])))), (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2] [i_1]))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) (~(((int) (unsigned short)54514))));
                            arr_21 [i_3] [i_6 + 1] = ((/* implicit */short) (-(((/* implicit */int) arr_20 [i_0 + 1] [i_4] [i_5] [14U]))));
                            var_16 &= ((/* implicit */unsigned short) var_6);
                        }
                    } 
                } 
            } 
            arr_22 [i_0 - 1] [i_3] [i_3] = ((/* implicit */int) ((((long long int) 4698058937995790046ULL)) / (((/* implicit */long long int) var_11))));
        }
        for (long long int i_7 = 2; i_7 < 14; i_7 += 2) 
        {
            var_17 -= ((/* implicit */unsigned char) (((~((~(((/* implicit */int) var_1)))))) / (((/* implicit */int) var_3))));
            arr_26 [i_0] [i_0 + 1] [(signed char)10] = ((long long int) ((unsigned short) (+(((/* implicit */int) var_12)))));
            arr_27 [i_0 - 1] [7U] [i_7 + 2] = ((/* implicit */unsigned char) arr_17 [i_0 + 1] [i_0 + 1]);
        }
        for (short i_8 = 2; i_8 < 16; i_8 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) arr_29 [i_0 + 1]);
            var_19 = ((/* implicit */short) max((((arr_7 [i_0 - 2] [i_8] [i_8 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((arr_7 [i_0 - 2] [i_8] [i_8 - 2]) ^ (((/* implicit */unsigned long long int) var_2))))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((int) (-(var_11)))))));
        }
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            var_21 &= ((/* implicit */short) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) ((signed char) var_2)))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)180)) < (((/* implicit */int) var_1)))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) var_8))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) != (var_11)))), (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0 - 2] [i_9])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)155)) ? (-1945309479) : (((/* implicit */int) (unsigned char)99)))))));
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((min((((15967031964988199563ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (unsigned short)8524)) : (((/* implicit */int) var_8))))))) - (8524ULL)))));
                        arr_40 [i_0 - 1] [(short)14] [i_0 - 1] [i_10] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_12 [i_0] [i_0])) <= (((/* implicit */int) arr_39 [i_0])))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_29 [i_0]), (((/* implicit */unsigned short) var_9))))))))));
                    }
                } 
            } 
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) max((((/* implicit */short) (signed char)7)), (((short) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) var_9)) + (18276))))))));
        arr_44 [i_12] [i_12] = ((short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 434294699U)) : (arr_4 [1ULL] [1ULL] [i_12]))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) arr_16 [i_12])))))));
    }
}
