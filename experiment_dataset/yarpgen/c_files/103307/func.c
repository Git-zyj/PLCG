/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103307
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1)), (18058887399910686883ULL)))))))));
        var_16 = ((((/* implicit */_Bool) min((387856673798864732ULL), (387856673798864722ULL)))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0]))) : (var_4));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_6 [(_Bool)1] [i_1] = min((((/* implicit */unsigned long long int) (unsigned char)57)), (14172182324093913917ULL));
        var_17 ^= ((/* implicit */int) arr_5 [i_1] [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) min(((unsigned short)29369), ((unsigned short)65528)));
    }
    for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((_Bool) var_9))))), ((unsigned short)7)));
        var_19 = ((/* implicit */unsigned short) min((var_19), (min((arr_0 [i_2]), (((/* implicit */unsigned short) arr_11 [i_2]))))));
    }
    /* LoopSeq 2 */
    for (int i_3 = 2; i_3 < 9; i_3 += 1) 
    {
        var_20 = ((((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_3])), (arr_14 [i_3 + 1] [5])))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned short)65516)) ^ (((/* implicit */int) (short)6065)))) >= (((/* implicit */int) arr_5 [i_3] [i_3 + 1]))))) : (max(((~(((/* implicit */int) (unsigned char)105)))), (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_3))))))));
        var_21 = ((/* implicit */unsigned long long int) max(((unsigned short)0), ((unsigned short)62485)));
    }
    for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 3) 
    {
        arr_18 [i_4] |= var_1;
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 4; i_5 < 13; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    arr_25 [(_Bool)1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17149965216946978767ULL)) ? (2) : (((/* implicit */int) (unsigned char)3))));
                    var_22 = ((/* implicit */int) arr_11 [i_4]);
                    var_23 = ((int) (unsigned short)29363);
                    var_24 = ((/* implicit */int) max((var_24), (((-624300877) / (((((/* implicit */_Bool) max((7), (var_0)))) ? (((/* implicit */int) (short)-21732)) : (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) var_6))))))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_1))));
}
