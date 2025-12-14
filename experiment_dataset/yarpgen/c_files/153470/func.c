/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153470
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12983))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (short)-15672)), (961549776)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))) : (var_3)))));
    var_21 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)6))))), ((~(10ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) 17325914224747740442ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_19))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [8] |= ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_2)) ? (0ULL) : (((/* implicit */unsigned long long int) 0LL)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) | (((/* implicit */int) var_0)))) & (((/* implicit */int) min((var_17), (((/* implicit */unsigned short) (short)22405))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 4; i_2 < 8; i_2 += 2) 
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_18);
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0))));
                var_22 += ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
            }
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)117)) : (var_7)));
            arr_11 [3LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (502874473677864091ULL)));
        }
        /* LoopSeq 3 */
        for (unsigned short i_3 = 2; i_3 < 6; i_3 += 4) 
        {
            arr_15 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_11))) ? (var_19) : (var_15)))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) & (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) -1222546684)) : (var_9))))))));
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)4583)) ? (2756523089956895703LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))))) % (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
            arr_16 [i_0] [(unsigned char)3] = ((/* implicit */long long int) ((((_Bool) 12731545168818906859ULL)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (2344863647U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) ((var_15) > (((/* implicit */unsigned long long int) var_3))))), (max(((short)15789), (((/* implicit */short) var_0))))))))));
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 6; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        {
                            arr_25 [i_6] [i_0] [i_0] [i_5] [i_3 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) 11ULL))) * (((((/* implicit */int) (signed char)-56)) / (((/* implicit */int) var_17))))))), ((-(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_9)))))));
                            arr_26 [i_5] [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)12738))))), ((((!(((/* implicit */_Bool) var_19)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))))) : (max((var_19), (12527244414155812536ULL)))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                arr_32 [i_0] [i_8] [i_7] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_15)))) ? (((/* implicit */unsigned int) ((int) var_11))) : ((-(var_2))))) - ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (2758957465U)))))));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (-((((_Bool)1) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49185)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))), (((-791160990) ^ (((/* implicit */int) (signed char)-22))))))) : (((((((/* implicit */_Bool) (unsigned short)29252)) ? (((/* implicit */unsigned long long int) var_9)) : (var_1))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) > (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))));
                arr_33 [i_0] [i_8] [(unsigned short)9] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((1018108733U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))), (((((/* implicit */int) (unsigned short)18705)) & (((/* implicit */int) var_17))))))) ? ((-(((/* implicit */int) ((signed char) var_14))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                arr_34 [i_0] [i_8] [i_8] [i_8] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) (((_Bool)1) ? (2185715767U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) > ((+(0ULL))))) ? (((((/* implicit */_Bool) (-(11531933032846077968ULL)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)0))))) : (max((2208349898134048324ULL), (((/* implicit */unsigned long long int) var_17)))))) : (((/* implicit */unsigned long long int) var_9))));
            }
            for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                arr_38 [i_7] [i_7] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? ((~(765466708U))) : (((/* implicit */unsigned int) var_7))))));
                arr_39 [i_0] [i_0] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1667745186597448229LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2))) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)59115)))))))) ? (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (253932618U))), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)13039))) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) (unsigned short)8968)))))));
                var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((var_3), (var_3)))) + ((+(8062403573739956879ULL)))))) ? (((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned short)0))))))) : (((((/* implicit */long long int) (-(2129243706)))) / (((long long int) var_9))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                for (int i_11 = 3; i_11 < 9; i_11 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            arr_47 [i_12] [i_11] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((18446744073709551608ULL), (((/* implicit */unsigned long long int) 2418854420U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (((18446744073709551605ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                            arr_48 [i_10] [i_7] [5ULL] [i_11] [i_10] [i_7] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) (unsigned char)244)) ? (1771085026426199983LL) : (((/* implicit */long long int) ((/* implicit */int) (short)8189)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)1242)), (var_19))) : (var_4)))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 4) 
                        {
                            arr_51 [i_0] [i_13] [i_0] [(_Bool)1] [(short)5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) ? (((((/* implicit */_Bool) (unsigned short)50833)) ? (15917791227260302667ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                            arr_52 [i_0] [i_0] [(unsigned char)0] = ((/* implicit */_Bool) (((-(8648824021785398398ULL))) + ((-(var_4)))));
                            arr_53 [i_0] [(unsigned short)6] [i_11] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31839)) ? (((/* implicit */int) var_17)) : (var_7)))) ? ((~(269997363285188092ULL))) : (((((/* implicit */_Bool) var_0)) ? (var_1) : (var_19)))))) ? (((/* implicit */unsigned long long int) var_3)) : (min((((/* implicit */unsigned long long int) var_9)), (((var_15) >> (((((/* implicit */int) var_16)) - (54535)))))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_2))));
                            arr_57 [i_14] [i_11] [5] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967267U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_1))) - (max((var_1), (((/* implicit */unsigned long long int) 1249779766))))))) ? (((((/* implicit */_Bool) (short)-12284)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51974))) : (var_1))) : (((((/* implicit */_Bool) (-(1942031121)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)13774)) : (((/* implicit */int) (signed char)12))))) : (((((/* implicit */_Bool) var_4)) ? (var_1) : (var_1)))))));
                            var_27 = (!(((/* implicit */_Bool) max((1847159605872549083ULL), (((/* implicit */unsigned long long int) (short)-6919))))));
                            arr_58 [7LL] [i_14] [i_10] [i_14] [i_0] [i_10] = ((/* implicit */_Bool) var_17);
                            arr_59 [6ULL] [i_7] [4U] [i_7] [i_7] |= ((/* implicit */long long int) ((unsigned char) 7056118022062458291ULL));
                        }
                        arr_60 [(unsigned char)7] [i_7] [(unsigned char)7] [i_11] [i_10] = ((/* implicit */short) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-144)))))));
                    }
                } 
            } 
            arr_61 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) ? (4320826862823734897ULL) : (((/* implicit */unsigned long long int) 1310376094U)))) << (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)2952)))) - (769)))))) ? ((-(((((/* implicit */int) (unsigned short)28911)) & (((/* implicit */int) (short)-13482)))))) : (var_7)));
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((min((var_3), (((/* implicit */unsigned int) var_10)))) / (((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) / (((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (((((/* implicit */int) (unsigned short)57526)) + (((/* implicit */int) (unsigned char)0))))))))))));
            arr_62 [i_7] [i_7] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (var_2)))) : (((7382296185191406407ULL) / (3041615359772157987ULL)))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
        {
            arr_65 [i_0] = ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)47298)))) % (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) var_16)))));
            arr_66 [i_15] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-64)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) << (((((unsigned long long int) var_2)) - (634627144ULL)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 13012132826952118924ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))) | (((((/* implicit */_Bool) (unsigned short)18890)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-30)) ? (4280948769U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_9)))) : (max((var_19), (((/* implicit */unsigned long long int) 333608001U))))))));
        }
        var_29 ^= ((/* implicit */unsigned short) var_7);
    }
    for (int i_16 = 0; i_16 < 24; i_16 += 4) 
    {
        arr_71 [i_16] [i_16] &= ((/* implicit */unsigned short) (((~(15059567816287729626ULL))) | (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (0U))) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))))));
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) * (3145385915U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((var_10) ? (var_3) : (var_3))))))));
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (min((var_2), (((/* implicit */unsigned int) var_10))))))) * ((+((((_Bool)1) ? (((/* implicit */unsigned long long int) 0U)) : (var_1)))))));
    }
    for (long long int i_17 = 1; i_17 < 19; i_17 += 2) 
    {
        var_32 = ((/* implicit */unsigned int) min((var_32), (((((/* implicit */_Bool) 1657419491U)) ? (261646868U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188)))))));
        var_33 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(-2040822565)))) | ((~(var_15)))));
    }
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_19 = 0; i_19 < 10; i_19 += 2) 
        {
            var_34 += ((/* implicit */unsigned char) min((((unsigned long long int) var_19)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))));
            arr_78 [i_18] &= ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned char)244)) ? (((((/* implicit */_Bool) var_18)) ? (578299179U) : (((/* implicit */unsigned int) -2030474362)))) : (((((/* implicit */_Bool) (short)0)) ? (3206803899U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41)))))))));
        }
        arr_79 [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) - (10691750096069691254ULL)))) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) (short)0)) : (-1988892193)))));
    }
    var_35 = ((/* implicit */long long int) var_13);
}
