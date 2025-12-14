/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141904
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0]))))), (((((/* implicit */_Bool) (short)24576)) ? (1196555040) : (((/* implicit */int) (short)-10344))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)8191)))) ? (((arr_1 [i_0]) ? (((/* implicit */int) (short)-24590)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (unsigned short)8546))));
            var_13 = ((/* implicit */unsigned int) min((max((((/* implicit */int) (unsigned short)46874)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)3])) : (((/* implicit */int) arr_1 [i_1])))))), (((/* implicit */int) max((min((((/* implicit */short) (_Bool)1)), ((short)24590))), (min((((/* implicit */short) (signed char)56)), ((short)24559))))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)92)) << (((((/* implicit */int) (unsigned char)109)) - (89))))))))))));
                var_15 = max((((-1763287607) / ((+(-503772300))))), (1016808410));
                arr_6 [i_0] [i_0] [i_0] = ((unsigned short) 7765802338998720841LL);
            }
        }
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            arr_16 [i_3] [i_5] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-14203))));
                            var_16 = (~(((/* implicit */int) (unsigned short)50554)));
                        }
                        var_17 -= ((/* implicit */signed char) max(((short)-8192), ((short)24578)));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */short) var_9);
}
