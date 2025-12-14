/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118201
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [(unsigned short)5] [(unsigned short)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11883712146404815516ULL)) ? (((/* implicit */int) (unsigned short)224)) : (((/* implicit */int) (unsigned short)64191))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) max((((/* implicit */int) var_3)), (arr_0 [i_0])))))));
        var_16 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) 15057613839392561060ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1])))))) ? ((+(((/* implicit */int) (!((_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((-1426796570), (-5)))))))));
        var_18 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned char)0)), (1663681119699963349ULL)));
        var_19 += ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) arr_5 [i_1])))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) arr_5 [i_2])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned short)0] [i_2]))))))), (((/* implicit */long long int) ((int) (-(-13)))))));
        var_21 += ((/* implicit */int) ((long long int) (-(((/* implicit */int) var_8)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            arr_13 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_3]))) : (var_7)));
            arr_14 [4] [4] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)95))));
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (unsigned char)197)) : (var_6)));
                /* LoopSeq 3 */
                for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    var_23 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_6))))));
                    arr_21 [i_2] [i_3] [i_4] [i_2] = ((unsigned short) (unsigned char)89);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_26 [i_4] [(_Bool)0] [i_2] &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)58)) ? (516096) : (((/* implicit */int) (short)11587))))));
                    arr_27 [i_2] [i_2] [i_4] [(unsigned short)0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2]))));
                    var_24 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) var_10)))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_30 [i_7] [10LL] [10LL] [i_2] &= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    var_25 &= ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_5))))));
                    var_26 = ((/* implicit */short) ((signed char) var_5));
                    arr_31 [i_2] = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) (unsigned char)214)))));
                }
            }
            arr_32 [i_2] [i_2] = (-(((/* implicit */int) (_Bool)0)));
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) 5594277517655202294LL)))));
            arr_36 [i_2] [i_2] = ((/* implicit */long long int) ((_Bool) 1614308982));
            arr_37 [i_2] [i_2] [i_2] = ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (_Bool)0)))));
        }
        var_28 = ((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)58332)))));
        arr_38 [i_2] = ((/* implicit */short) (!(((_Bool) (-(((/* implicit */int) (short)-18395)))))));
    }
    var_29 += ((/* implicit */_Bool) (-(((/* implicit */int) min(((!(((/* implicit */_Bool) var_9)))), ((!((_Bool)1))))))));
    var_30 = ((/* implicit */unsigned char) var_0);
}
