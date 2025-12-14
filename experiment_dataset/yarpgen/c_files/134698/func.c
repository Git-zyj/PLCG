/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134698
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_10 = ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (signed char)-48))))), (arr_0 [i_0])))) >= (((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (signed char)127)) : (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0])))))));
        var_11 ^= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) max(((unsigned short)9641), (((/* implicit */unsigned short) (signed char)127))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max((((/* implicit */int) min((arr_6 [i_1] [i_3]), (arr_6 [i_1] [i_3])))), (((((/* implicit */int) (unsigned short)55894)) >> (((/* implicit */int) arr_2 [i_3] [i_3])))))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_1] = ((/* implicit */signed char) arr_14 [i_1] [i_4 - 1] [i_1]);
                                var_13 = ((/* implicit */long long int) (signed char)-20);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (signed char i_7 = 2; i_7 < 11; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    {
                        arr_26 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_3 [i_6] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_8])) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) arr_3 [i_1] [i_1])))))));
                        arr_27 [i_1] [i_1] [i_7 - 1] [i_1] = ((/* implicit */unsigned short) (signed char)-3);
                        arr_28 [i_1] [i_1] [i_6] [i_7] [i_1] [i_8] = ((/* implicit */unsigned char) arr_4 [i_1]);
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */signed char) var_1);
    }
    var_15 = ((/* implicit */signed char) max((min(((unsigned short)65492), (var_1))), ((unsigned short)15)));
}
