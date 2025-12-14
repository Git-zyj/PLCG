/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139097
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_8)), ((-(arr_0 [i_0 + 3])))));
        var_18 = ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))) | (var_4))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)2047))) || (((/* implicit */_Bool) arr_1 [i_0 + 4])))))));
    }
    for (int i_1 = 4; i_1 < 15; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) (+(255U)));
                    arr_15 [i_1 - 2] [i_2 + 1] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || ((!(((/* implicit */_Bool) var_12)))))))));
                }
            } 
        } 
        arr_16 [i_1 + 2] = var_11;
    }
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            arr_23 [i_4] [i_4] = ((/* implicit */unsigned long long int) min((4353330467717167506LL), (((/* implicit */long long int) min((arr_17 [i_4]), (((/* implicit */unsigned int) var_11)))))));
            arr_24 [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_16) & (var_16)))) ? (((/* implicit */int) var_11)) : (var_16)));
            arr_25 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((int) ((arr_20 [i_4] [i_4] [i_4]) / (((/* implicit */long long int) 725900954)))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_8)) | (550228855U)));
            var_20 ^= ((((/* implicit */unsigned long long int) arr_20 [i_4] [(unsigned char)4] [i_6])) == (arr_22 [i_4] [i_4] [(_Bool)1]));
            var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) / (arr_20 [i_4] [i_6] [i_6])))));
            arr_29 [i_4] [i_4] = ((/* implicit */long long int) -742481879);
        }
        var_22 = ((long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1497848110U)) && (((/* implicit */_Bool) var_15))))), (arr_18 [i_4] [i_4])));
    }
    for (unsigned short i_7 = 3; i_7 < 11; i_7 += 3) 
    {
        var_23 ^= var_8;
        arr_34 [i_7 + 1] &= ((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) ? (min((((/* implicit */unsigned int) arr_7 [i_7 + 1] [i_7 - 2] [i_7 - 3])), (arr_18 [i_7 + 1] [i_7 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    }
    var_24 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
    var_25 = ((/* implicit */long long int) min((var_25), ((~(min((((long long int) (unsigned short)9624)), (((/* implicit */long long int) (-(((/* implicit */int) var_15)))))))))));
    var_26 = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */int) var_1))))) + (min((((/* implicit */long long int) (-(((/* implicit */int) var_7))))), (((var_4) + (((/* implicit */long long int) -1)))))));
    var_27 = ((/* implicit */unsigned int) var_8);
}
