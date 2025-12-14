/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160117
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) >> (((((((/* implicit */_Bool) ((3836712462U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)12060)))))) ? (((unsigned int) 458254833U)) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31058))))) - (458254806U)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) 458254833U);
                    var_20 = ((458254849U) % (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 458254819U))) << (((((((/* implicit */int) (short)-31058)) * (((/* implicit */int) (unsigned char)9)))) + (279541)))))));
                    arr_10 [i_0] [i_1] [i_0] [i_2] = (unsigned short)8827;
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
            {
                arr_16 [i_0] [3U] [i_0] [i_4] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)235)))) & (((/* implicit */int) ((560094991U) != (458254833U))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (short)20490);
                            arr_24 [(unsigned short)1] [i_6] [i_0] [i_0] [(unsigned short)7] [(unsigned short)7] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 1751509114U))))) > (((((/* implicit */_Bool) 567914105U)) ? (((/* implicit */int) (short)-15153)) : (((/* implicit */int) (unsigned short)0))))));
                            var_21 = ((/* implicit */unsigned short) ((458254831U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235)))));
                            var_22 = ((/* implicit */unsigned char) (unsigned short)28);
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)177)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30452))) % (1751509144U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3836712477U)) || (((/* implicit */_Bool) 458254849U))))))));
            }
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
            {
                var_24 = ((3046701567U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)31054))));
                var_25 = ((/* implicit */unsigned short) ((458254834U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78)))));
            }
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) (~(4108589232U)));
                            var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58729))) > (1751509114U))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)227)) ? (3397486548U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31031)))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)238)) <= (((/* implicit */int) (unsigned char)0))));
            }
            /* LoopNest 2 */
            for (unsigned int i_11 = 3; i_11 < 12; i_11 += 3) 
            {
                for (unsigned int i_12 = 1; i_12 < 12; i_12 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) (short)1496)) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) 1364981764U))))))))));
                        var_31 = ((/* implicit */unsigned short) 2543458193U);
                    }
                } 
            } 
        }
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) min((((2543458173U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-1753))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191))) + (458254849U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-8233), (max((((/* implicit */short) (unsigned char)227)), ((short)-1753))))))) : (2543458173U)));
    }
    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 1) /* same iter space */
    {
        arr_45 [i_13] = ((unsigned short) (+((-(((/* implicit */int) (short)-6022))))));
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 3) 
        {
            for (unsigned int i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                {
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)191)) - (((/* implicit */int) (unsigned short)6807))));
                    arr_50 [i_15] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((short) (unsigned char)2))) == (((/* implicit */int) ((((/* implicit */int) (short)8233)) <= (((/* implicit */int) (short)-16993))))))))) % (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 758480858U)))))) - (min((((/* implicit */unsigned int) (unsigned char)122)), (2543458182U)))))));
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) (short)27529)) : (((/* implicit */int) (short)-1753)))))) & (((((/* implicit */int) ((((/* implicit */int) (short)-8226)) > (((/* implicit */int) (unsigned short)47490))))) | ((-(((/* implicit */int) (unsigned short)14892))))))));
        /* LoopSeq 1 */
        for (unsigned int i_16 = 3; i_16 < 9; i_16 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_17 = 3; i_17 < 11; i_17 += 4) 
            {
                for (unsigned char i_18 = 0; i_18 < 13; i_18 += 1) 
                {
                    for (unsigned int i_19 = 2; i_19 < 10; i_19 += 3) 
                    {
                        {
                            arr_62 [i_13] [i_13] [i_13] [i_13] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)8225)) << (((((/* implicit */int) (short)14385)) - (14372)))));
                            var_35 = ((/* implicit */short) min((((max((1400574072U), (((/* implicit */unsigned int) (short)8441)))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1299843199U)) ? (((/* implicit */int) (unsigned short)33958)) : (((/* implicit */int) (short)-8225))))))), (((((/* implicit */int) (short)-8209)) != (((/* implicit */int) (short)-8657))))));
                            var_36 *= ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((((/* implicit */int) (short)14128)) * (((/* implicit */int) (unsigned short)0))))) ^ (((((/* implicit */_Bool) (short)17000)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (3542513792U)))))));
                            var_37 = ((/* implicit */short) max((((((((/* implicit */int) (short)8645)) + (((/* implicit */int) (unsigned char)4)))) * (((/* implicit */int) ((((/* implicit */int) (short)648)) < (((/* implicit */int) (unsigned char)31))))))), (((((/* implicit */int) ((((/* implicit */int) (short)16495)) == (((/* implicit */int) (short)-8642))))) % (((((/* implicit */int) (unsigned short)63449)) | (((/* implicit */int) (unsigned char)20))))))));
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) min((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (unsigned short)0)))))), ((+(((/* implicit */int) (unsigned short)31289)))))))));
        }
    }
    var_39 = ((/* implicit */short) var_14);
}
