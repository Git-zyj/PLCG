/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180472
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)21784)) ? ((-((~(((/* implicit */int) var_6)))))) : (((/* implicit */int) var_5))));
    var_13 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)234)) && (((/* implicit */_Bool) (short)18660))))) : (((/* implicit */int) ((signed char) 7311629778440069912ULL))))), (((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-18660)) : ((-(((/* implicit */int) arr_2 [i_0] [i_0 + 1]))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 3]))) + (min((5192292374888727919ULL), (((/* implicit */unsigned long long int) 3290957566U))))))));
            var_16 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) 9955604667607474769ULL)) ? (9955604667607474769ULL) : (1335751732358690628ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) arr_4 [i_0 + 2] [i_0] [i_0])));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) (+(arr_1 [i_0])))) : (((((/* implicit */_Bool) (signed char)64)) ? (var_9) : (((/* implicit */unsigned long long int) 2147483647))))))) ? (((((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) 1335751732358690628ULL)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max(((signed char)-47), (var_8)))) : (((/* implicit */int) min((var_7), (var_11))))))));
        }
        for (signed char i_2 = 2; i_2 < 21; i_2 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) var_4);
            var_19 = arr_3 [i_0] [i_2] [i_0];
        }
        var_20 = ((/* implicit */unsigned int) arr_2 [i_0] [(unsigned char)0]);
    }
    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (9955604667607474769ULL)));
        var_22 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) - ((+(13950770501804098269ULL))))) + (((/* implicit */unsigned long long int) ((unsigned int) ((signed char) (short)1643))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */int) var_8);
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) 1473009738U)) : (6755399441055744ULL)));
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [18U] [i_4] [i_5])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_4] [i_4])) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) var_1)) - (arr_12 [i_4])))));
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((5529973650281408620ULL) < (((/* implicit */unsigned long long int) arr_12 [i_5])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_5] [i_5])) + (((/* implicit */int) var_0))))) : (574057313U))))));
            var_27 = ((/* implicit */unsigned int) ((signed char) (signed char)-106));
            var_28 &= ((/* implicit */int) (signed char)105);
        }
    }
}
