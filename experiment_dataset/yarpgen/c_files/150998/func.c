/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150998
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
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))), ((unsigned short)44919)));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                for (signed char i_3 = 3; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_9 [i_3] [i_1] [i_3] [i_3] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 - 3] [i_0 - 1]))) : (arr_0 [i_0 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 - 2] [i_0 - 2]))))) : ((-(((/* implicit */int) arr_2 [i_2 - 1] [i_0 + 1]))))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 5663902470378319743ULL)))) ? (((/* implicit */int) (unsigned short)49626)) : (((((/* implicit */_Bool) (short)29253)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)29125))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_3])) ? (13ULL) : (((/* implicit */unsigned long long int) -4256473422983492548LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((+(arr_4 [i_0] [i_1] [i_2 - 3] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 1] [i_0 - 1])))))) ? (((/* implicit */unsigned long long int) (-((+(arr_6 [(unsigned char)10] [i_1 - 2] [i_2])))))) : (max((arr_1 [i_2 - 2] [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_2 - 1] [i_3 + 2]))))));
                        var_23 = arr_2 [i_0] [i_0];
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 - 3] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 7517263908943223004ULL)) || (((/* implicit */_Bool) var_2)))))) : ((~((~(((/* implicit */int) arr_2 [i_0] [i_0 - 2]))))))));
        arr_10 [i_0 - 3] = ((/* implicit */unsigned char) arr_1 [(signed char)17] [(unsigned short)1]);
    }
    for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_12 [i_4]))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((signed char) 18207991026793051278ULL)))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                {
                    arr_19 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */_Bool) ((int) (unsigned char)142));
                    var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)251)))))));
                    var_28 += (-(arr_14 [13ULL] [13ULL]));
                    var_29 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((3906492915U), (((/* implicit */unsigned int) (signed char)103))))), (((16ULL) % (((/* implicit */unsigned long long int) (-(-1LL))))))));
                }
            } 
        } 
    }
}
