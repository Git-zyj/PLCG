/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189472
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) min((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)122))))) ? (((/* implicit */int) (signed char)127)) : ((~(((/* implicit */int) (unsigned short)65535))))))))))));
        var_13 = ((unsigned int) ((unsigned short) var_10));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_0])))))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((4294967295U) / (var_4)))))) || (((((/* implicit */_Bool) (signed char)16)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 16; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        arr_13 [i_1] = ((/* implicit */signed char) ((4294967295U) + (1457573942U)));
                        arr_14 [i_1 + 2] [i_1 + 2] [i_2] [i_1 + 2] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (67978284U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                        arr_15 [i_4] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (4294967295U)))) ? (((unsigned int) 1610466608U)) : (4294967273U));
                    }
                } 
            } 
        } 
        arr_16 [i_1] = ((((/* implicit */_Bool) (~(var_3)))) ? ((+(4294967295U))) : (((var_6) ^ (2684500687U))));
        arr_17 [i_1 + 2] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? ((~(4226989012U))) : (var_9)));
        var_16 -= ((((/* implicit */_Bool) ((0U) & (1457573942U)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : (var_4));
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        {
                            arr_31 [i_1 + 1] [i_5] [i_6] [i_7] [17U] = ((/* implicit */signed char) var_0);
                            arr_32 [(unsigned short)8] [i_5] [i_6] [i_7] [(signed char)2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_9 [i_8] [i_7] [i_6])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-1)))) && (((/* implicit */_Bool) (+(var_10))))));
            /* LoopNest 2 */
            for (signed char i_9 = 2; i_9 < 17; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
                        var_19 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (4294967279U))))));
                        var_20 = ((/* implicit */signed char) var_7);
                    }
                } 
            } 
            arr_41 [16U] = ((((/* implicit */_Bool) 10U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_24 [i_1] [3U]))))) : (4294967289U));
        }
        for (signed char i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
        {
            arr_44 [i_11] [i_11] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)45531)) ? (var_5) : (0U)))));
            arr_45 [(signed char)9] [i_1] [i_11] = (+((~(650223587U))));
        }
    }
    for (signed char i_12 = 1; i_12 < 16; i_12 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_13 = 2; i_13 < 16; i_13 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45531))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)127)), (3809387065U)))) ? (4294967295U) : (((((/* implicit */_Bool) arr_8 [i_12] [12U])) ? (4294967291U) : (4U)))))));
            arr_50 [i_12] [i_12 + 1] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)0)))))));
        }
        /* LoopNest 3 */
        for (signed char i_14 = 0; i_14 < 19; i_14 += 3) 
        {
            for (unsigned int i_15 = 1; i_15 < 16; i_15 += 3) 
            {
                for (unsigned int i_16 = 1; i_16 < 18; i_16 += 4) 
                {
                    {
                        arr_60 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1457573942U)) ? (min((((/* implicit */unsigned int) (signed char)20)), (((((/* implicit */_Bool) 1423021738U)) ? (1208877931U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54096)))));
                        arr_61 [i_12 + 3] [18U] [i_14] [i_14] [7U] = ((/* implicit */signed char) ((2318184389U) / (4294967282U)));
                        arr_62 [i_14] [i_14] [i_16] [i_16] [i_16] [0U] = ((/* implicit */unsigned int) ((unsigned short) max((((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) arr_9 [i_12] [6U] [i_15])) : (((/* implicit */int) arr_10 [i_12] [i_12] [8U])))), (((/* implicit */int) ((signed char) arr_42 [i_12] [i_14]))))));
                    }
                } 
            } 
        } 
        var_22 = (~(2584046799U));
        arr_63 [i_12] = ((/* implicit */unsigned short) ((max((32704U), (4294967295U))) / (max((arr_37 [i_12 + 1]), (((/* implicit */unsigned int) ((signed char) 2837393353U)))))));
    }
    var_23 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)5937)))) == (((/* implicit */int) (unsigned short)11520))));
    var_24 = min((((/* implicit */unsigned int) var_1)), ((~(min((((/* implicit */unsigned int) var_8)), (1909046854U))))));
}
