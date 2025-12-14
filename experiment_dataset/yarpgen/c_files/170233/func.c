/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170233
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((var_12), (var_17)))))) ? (max((((/* implicit */long long int) 3005797347U)), (3499527599938877957LL))) : ((((!(((/* implicit */_Bool) -6448855358489483965LL)))) ? (((/* implicit */long long int) (~(var_17)))) : (((long long int) -1083978575)))))))));
    var_19 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0] [(unsigned short)6] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max(((+(3499527599938877946LL))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_3)) : (6448855358489483964LL)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_17)), (var_14)))) : (var_8)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_11 [i_1] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10054)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)121)))))));
                            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (short)-32760)), (var_11))))));
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) min((((((_Bool) (unsigned char)128)) ? ((((_Bool)1) ? (2727314030U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64545))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 4121924148U)) ? (var_3) : (1163500700))))))));
                                arr_17 [i_4] [i_4] [i_4] [i_4] [7U] [i_4] [(_Bool)1] = ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)27921), (((/* implicit */short) var_16)))))) : (min((var_9), (((/* implicit */unsigned int) var_11)))));
                                arr_18 [i_0] [i_0] [i_1] [(short)8] [i_2] [17] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_15) ? (-9046232879046368842LL) : (((/* implicit */long long int) var_10))))) ? ((~(var_11))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)125))))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned int) (~(var_4)));
                                var_22 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) 1911575895)) ? (392085105461297536LL) : (((/* implicit */long long int) ((/* implicit */int) (short)13072)))))));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                arr_26 [i_6] [i_6] [i_3] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_16))));
                                var_23 = ((/* implicit */unsigned char) ((_Bool) max((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_14)))))));
                            }
                            var_24 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)27))))))) ? (-5488688348570546476LL) : (((/* implicit */long long int) max((((((/* implicit */_Bool) -1LL)) ? (1810757325) : (((/* implicit */int) (short)13072)))), (((/* implicit */int) (unsigned char)16)))))));
        var_26 *= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)117)))))));
        arr_29 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)12))))) ? (min(((+(var_14))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)13075)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (unsigned char)132))))))) : (((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned char)152)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)64545)))))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                for (short i_11 = 1; i_11 < 24; i_11 += 2) 
                {
                    for (unsigned char i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        {
                            arr_40 [i_8] [i_8] [i_8] [i_8] [i_11] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)88))) ? (((/* implicit */int) (unsigned char)104)) : (var_12)));
                            var_27 = (+((+(((/* implicit */int) (signed char)47)))));
                            arr_41 [i_8] [i_11] [i_10] [i_11] [i_8] [i_11] [(unsigned char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26672)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (unsigned char)12))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)152))))) : (((((/* implicit */_Bool) 397212474)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)))));
                        }
                    } 
                } 
            } 
            var_28 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)12)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)103)) ? (3448512569U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151)))))) : ((+(-1LL)))));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    {
                        var_29 = ((((/* implicit */_Bool) (short)30)) ? (((/* implicit */int) ((unsigned char) 1840489126U))) : (((/* implicit */int) (short)-9308)));
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (~(((/* implicit */int) (signed char)32)))))));
                    }
                } 
            } 
        }
        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 1) 
        {
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (_Bool)1))));
            var_32 = ((/* implicit */unsigned short) (_Bool)1);
        }
        for (unsigned long long int i_16 = 3; i_16 < 24; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_33 = var_12;
                        /* LoopSeq 1 */
                        for (unsigned char i_19 = 0; i_19 < 25; i_19 += 1) 
                        {
                            arr_60 [18] [i_16 - 1] [i_8] &= (~(var_14));
                            var_34 |= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */long long int) ((int) (signed char)-123))) : (6448855358489483964LL)));
                            var_35 ^= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned char)7))))));
                            var_36 = ((/* implicit */unsigned int) ((int) (-(((/* implicit */int) var_16)))));
                        }
                        arr_61 [i_18] [13] [i_16] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned char)0))) ? (((/* implicit */unsigned int) (~(-48825669)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2010712566U)))));
                    }
                } 
            } 
            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? ((+(var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32030)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (signed char)16)))))));
            var_38 *= var_6;
            var_39 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))));
            /* LoopNest 2 */
            for (unsigned char i_20 = 0; i_20 < 25; i_20 += 2) 
            {
                for (long long int i_21 = 2; i_21 < 24; i_21 += 2) 
                {
                    {
                        arr_66 [i_21] [i_16] [i_21] [i_20] [(unsigned char)20] &= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)70))))) ? ((-(var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (short)-9139)) : (var_11))))));
                        var_40 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-21305))));
                    }
                } 
            } 
        }
        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((unsigned int) var_13))) : (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))) : (-1707799354341125967LL)))));
        var_42 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (-1689963766) : (var_7)));
    }
}
