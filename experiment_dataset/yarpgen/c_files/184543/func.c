/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184543
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
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) var_15);
        var_20 = ((/* implicit */unsigned char) ((_Bool) arr_3 [i_0]));
    }
    for (int i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_21 = ((/* implicit */short) arr_5 [i_1]);
        var_22 = ((/* implicit */short) ((((-67108864) & (134152192))) == (((/* implicit */int) min((((/* implicit */short) arr_6 [i_1 - 1] [i_1 + 1])), (((short) arr_1 [i_1])))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                {
                    var_23 = ((/* implicit */int) arr_9 [i_1 + 1]);
                    var_24 = ((/* implicit */unsigned long long int) ((int) ((short) var_18)));
                    var_25 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (-67108864)))) == (((arr_2 [i_1] [i_1 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) ((1513724748) == (((/* implicit */int) (_Bool)1))))))))));
                    var_26 ^= ((/* implicit */unsigned char) var_17);
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_2 [i_1] [i_3]);
                }
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_27 = min((min((((/* implicit */int) (unsigned char)69)), (-67108864))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_4])) == (((/* implicit */int) arr_14 [i_4] [i_4]))))));
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_11))));
    }
    /* LoopSeq 4 */
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_29 = ((/* implicit */int) arr_18 [i_5]);
        arr_20 [i_5] = ((/* implicit */unsigned short) var_2);
        var_30 = ((/* implicit */short) ((unsigned char) arr_19 [(_Bool)1]));
        arr_21 [10] [10] &= ((/* implicit */long long int) ((-134152206) == (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned short i_6 = 1; i_6 < 12; i_6 += 2) 
    {
        arr_24 [i_6] [i_6] = ((/* implicit */short) ((unsigned short) max((min((arr_17 [i_6 + 3]), (arr_17 [i_6 + 3]))), (((/* implicit */unsigned int) ((short) var_17))))));
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (-134152193)));
        var_32 &= ((/* implicit */unsigned char) var_2);
        var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_6])) ^ (((((/* implicit */int) max((((/* implicit */unsigned short) (short)16384)), ((unsigned short)4619)))) | (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_22 [i_6]))))))));
    }
    for (unsigned char i_7 = 3; i_7 < 22; i_7 += 1) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned int) var_9);
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_25 [i_7]), (arr_27 [i_7 - 2]))))) * (((unsigned int) arr_25 [i_7]))));
        var_35 &= ((/* implicit */_Bool) arr_25 [i_7]);
    }
    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        var_36 = ((/* implicit */short) arr_27 [i_8]);
        arr_33 [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) max((((/* implicit */long long int) arr_32 [i_8] [7ULL])), (var_19))))) * (((/* implicit */int) ((((unsigned long long int) var_13)) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8]))))))));
    }
}
