/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176920
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_19 = (unsigned char)100;
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_20 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned char)5))))))));
                        var_21 |= (_Bool)1;
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)229)) | (((/* implicit */int) (unsigned char)3))));
            var_23 |= ((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)0))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) (_Bool)1);
            var_25 |= ((/* implicit */_Bool) arr_9 [(_Bool)1] [i_4]);
        }
        var_26 = ((/* implicit */_Bool) (unsigned short)46578);
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned char)36))))));
                        var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_6 - 1] [i_6] [i_6] [i_6] [i_7] [i_7])) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) arr_5 [i_6 - 1] [i_6 - 1]))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) (unsigned char)117)) : ((+(((/* implicit */int) arr_9 [i_6] [i_7]))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)214))))));
        var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_5]))));
    }
    var_32 -= ((/* implicit */unsigned char) ((_Bool) max(((~(((/* implicit */int) (unsigned char)214)))), ((+(((/* implicit */int) (unsigned char)252)))))));
    var_33 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_17))))));
}
