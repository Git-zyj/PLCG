/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182242
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
    var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_11), (var_2)))) ? (((((/* implicit */int) var_6)) % (((/* implicit */int) var_1)))) : (((/* implicit */int) max((var_3), (var_3)))))) * (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */int) (signed char)47)), ((~(((/* implicit */int) (unsigned short)13)))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 - 2] [i_1])) | (((/* implicit */int) var_4))))) ? (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned char) arr_4 [i_0] [i_0] [(short)1] [i_0]))))) : (((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned short)13))))))));
                    arr_8 [i_0] = ((/* implicit */signed char) ((((((((/* implicit */int) var_2)) + (((/* implicit */int) var_2)))) & ((-(((/* implicit */int) (short)5251)))))) << ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_4 [i_0 + 1] [i_0] [i_0] [i_0 + 1])))));
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) (((+(-4332907251719274419LL))) > (((/* implicit */long long int) ((/* implicit */int) (short)16128)))));
        var_13 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_0]), (((/* implicit */short) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))))) ? (((((/* implicit */_Bool) var_0)) ? (9223372036854775780LL) : (4332907251719274426LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_6 [i_0] [i_0 - 2])) + (6784))))))))));
        var_14 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0]))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))), (((4332907251719274418LL) + (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_16 [i_4] [(unsigned char)19] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((-4332907251719274419LL) == (2950502181871349147LL)))) % (((/* implicit */int) arr_11 [(short)20] [i_3]))));
            /* LoopNest 2 */
            for (signed char i_5 = 2; i_5 < 21; i_5 += 1) 
            {
                for (unsigned char i_6 = 2; i_6 < 21; i_6 += 3) 
                {
                    {
                        arr_21 [i_6] [i_4] [i_4] [i_4] [14LL] = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_3] [i_4 - 1] [i_4] [i_4] [i_3])) | (((/* implicit */int) arr_20 [(_Bool)1] [i_4 - 1] [i_4] [i_4] [i_6]))));
                        arr_22 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_20 [i_4 - 1] [i_5 + 1] [i_4] [i_5 - 2] [i_6 + 1]))));
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 3; i_7 < 19; i_7 += 3) 
        {
            var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)166))))));
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                for (short i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    for (unsigned char i_10 = 1; i_10 < 18; i_10 += 3) 
                    {
                        {
                            arr_33 [i_3] [i_3] [i_8] [i_9] [i_10] = ((/* implicit */unsigned short) ((unsigned char) arr_20 [i_10 + 2] [i_10 + 4] [i_9] [i_10] [i_10 + 4]));
                            var_16 = ((/* implicit */unsigned long long int) var_1);
                        }
                    } 
                } 
            } 
        }
        arr_34 [i_3] = ((/* implicit */unsigned char) (short)18167);
        arr_35 [i_3] [i_3] = ((/* implicit */short) (unsigned char)184);
    }
    var_17 |= ((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775755LL))))) == ((~(((/* implicit */int) var_10)))));
}
