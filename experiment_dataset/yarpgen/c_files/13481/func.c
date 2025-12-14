/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13481
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
    var_11 = ((unsigned short) ((min((var_6), (5037377201993676221LL))) ^ (((((/* implicit */_Bool) var_9)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23614)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 6; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        {
                            var_12 = ((((/* implicit */_Bool) (unsigned short)28186)) ? (3129063308640621650LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54371))));
                            var_13 = ((max((((/* implicit */long long int) (unsigned short)48935)), (7808407465703111766LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))));
                            var_14 &= ((((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_2] [i_1 - 1] [i_1])) ? (max((-5980571203954761679LL), (((/* implicit */long long int) (unsigned short)36141)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 - 2] [i_1 + 2])))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_6 [9LL] [i_1 - 1]))));
                arr_11 [i_1] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 1])) | (((/* implicit */int) (unsigned short)40512))))) ? (((/* implicit */int) max(((unsigned short)62447), ((unsigned short)41320)))) : (((/* implicit */int) min(((unsigned short)65534), ((unsigned short)17358))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_4 = 1; i_4 < 8; i_4 += 4) /* same iter space */
    {
        arr_14 [i_4] [i_4 + 2] = ((/* implicit */long long int) arr_12 [i_4]);
        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_6)))) || (((-2685749313778838874LL) > (((/* implicit */long long int) ((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_12 [i_4])), (arr_13 [10LL])))) ? (((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_2))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29708))) : ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)34014)) ^ (((/* implicit */int) (unsigned short)18758)))))));
        arr_15 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) arr_12 [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((9223372036854775807LL) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4 - 1]))))))) : (arr_13 [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((-8553816992436390252LL), (((/* implicit */long long int) (unsigned short)63278)))) < (min((var_6), (-1LL))))))) : (min((0LL), (((/* implicit */long long int) arr_12 [i_4 - 1]))))));
    }
    /* vectorizable */
    for (long long int i_5 = 1; i_5 < 8; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 2; i_6 < 9; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                {
                    arr_22 [i_5] [i_5] [i_6 - 2] [(unsigned short)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)52755)) - (((/* implicit */int) (unsigned short)36504))))) ? (((((/* implicit */_Bool) (unsigned short)14414)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60216))) : (var_9))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)50976)) - (((/* implicit */int) (unsigned short)54573)))))));
                    var_17 |= ((/* implicit */long long int) (unsigned short)25608);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) -5262193055736436930LL))));
    }
}
