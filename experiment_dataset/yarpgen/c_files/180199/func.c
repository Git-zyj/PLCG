/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180199
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
    var_18 = ((/* implicit */unsigned short) min((var_2), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            arr_12 [(unsigned short)6] [i_3] [i_2] [i_3] [i_0] [i_4] [i_0] = ((/* implicit */long long int) -1212990097);
                            arr_13 [(_Bool)1] [i_0] [i_1] [(_Bool)1] [i_0] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_0]))));
                            arr_14 [i_0] [i_1] [10ULL] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(63LL))))));
                            arr_15 [3LL] [i_1] [i_0] [1U] [i_4] = ((((/* implicit */_Bool) -1212990097)) ? (((/* implicit */long long int) 268435456)) : (max((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_0] [i_0]))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 1212990097)) : (8646911284551352320LL)))) ? ((-(4294967295U))) : (1145330168U)));
                        }
                        arr_16 [i_0] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_17)))), (((/* implicit */int) arr_10 [7U] [i_0] [i_2] [i_3] [i_3])))) + (((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0]))))));
                        var_20 ^= ((/* implicit */int) (unsigned short)15539);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            for (signed char i_6 = 3; i_6 < 11; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    {
                        arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)32767);
                        arr_24 [(signed char)6] [(_Bool)1] [i_6 + 3] [i_0] [i_5] [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (min((max((1106310820U), (((/* implicit */unsigned int) arr_17 [i_0])))), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0]))));
                        arr_25 [i_0] = ((/* implicit */signed char) max((((((unsigned int) -1993551861)) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_6 - 1] [i_6]))))), (((/* implicit */unsigned int) max((698622472), (((/* implicit */int) arr_3 [i_0])))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_21 ^= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((1212990111), (((/* implicit */int) (_Bool)1)))))))));
        arr_28 [(unsigned char)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_8 [(unsigned char)2] [(unsigned short)12] [i_8]), (arr_8 [i_8] [(_Bool)1] [i_8])))) ? (max((1212990096), (arr_8 [i_8] [(signed char)6] [i_8]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-49)))))));
    }
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_12))));
}
