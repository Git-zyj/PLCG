/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187110
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_4 [(signed char)5] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
        var_20 += ((/* implicit */_Bool) ((signed char) arr_2 [i_0 + 1]));
        arr_5 [11U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) && (((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 2]))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (signed char)72))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) /* same iter space */
    {
        arr_8 [(unsigned char)0] = ((/* implicit */unsigned short) ((-8102376798240453266LL) / (((/* implicit */long long int) arr_0 [i_1 - 1]))));
        var_22 = ((/* implicit */int) ((unsigned short) (unsigned short)54929));
        var_23 = arr_3 [i_1 - 1] [i_1];
    }
    for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) /* same iter space */
    {
        arr_11 [1U] = ((/* implicit */unsigned char) 8780708750473142211LL);
        /* LoopNest 3 */
        for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            for (short i_4 = 1; i_4 < 10; i_4 += 4) 
            {
                for (unsigned char i_5 = 1; i_5 < 9; i_5 += 3) 
                {
                    {
                        var_24 = arr_14 [i_2 + 1] [i_3 + 2];
                        var_25 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_6 [i_2 + 1])))) + (2147483647))) << (((((/* implicit */int) arr_10 [i_2 + 1])) >> (((((/* implicit */int) arr_10 [i_2 - 1])) - (10186)))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) min((((/* implicit */long long int) arr_12 [i_2 + 1])), (min((((/* implicit */long long int) (signed char)-68)), (8780708750473142211LL))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 4) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */signed char) ((unsigned int) 16777216));
        arr_23 [i_6] = ((/* implicit */unsigned char) (signed char)-86);
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
        {
            arr_28 [i_6] [i_6] [i_7] = ((/* implicit */signed char) ((short) (unsigned short)54913));
            arr_29 [i_6] [i_7] [i_6] = ((/* implicit */signed char) (unsigned short)10607);
        }
        for (int i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) ((int) 11754355611430754688ULL));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_8] [i_6 - 1] [i_6 + 2]))) * (arr_1 [i_10] [(_Bool)1])));
                        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_6]))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned short) (_Bool)1);
        }
        var_31 = ((/* implicit */int) arr_32 [i_6] [i_6 + 1] [i_6]);
    }
    /* LoopNest 2 */
    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
    {
        for (short i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            {
                var_32 = arr_0 [(signed char)10];
                var_33 = ((/* implicit */unsigned short) arr_41 [i_11]);
                var_34 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_11])) % (((/* implicit */int) arr_2 [i_11])))) <= (((/* implicit */int) min((arr_2 [i_12]), (arr_42 [i_11] [i_12]))))));
            }
        } 
    } 
    var_35 = ((/* implicit */signed char) (unsigned char)92);
    var_36 = ((/* implicit */signed char) var_14);
    var_37 = ((/* implicit */signed char) ((_Bool) var_12));
}
